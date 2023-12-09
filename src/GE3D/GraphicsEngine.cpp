#include <GE3D/GraphicsEngine.h>

GraphicsEngine::GraphicsEngine()
{
    //std::cout << "GraphicsEngine object created" << std::endl;
}

GraphicsEngine::~GraphicsEngine()
{
    
}

void GraphicsEngine::InitVertexShader(const char* vertexShaderSource)
{
    vertexShader = glCreateShader(GL_VERTEX_SHADER);

    glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
    glCompileShader(vertexShader);
}

void GraphicsEngine::InitFragmentShader(const char* fragmentShaderSource)
{
    fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);

    glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
    glCompileShader(fragmentShader);
}

void GraphicsEngine::ShaderPrograms()
{
    shaderProgram = glCreateProgram();

    glAttachShader(shaderProgram, vertexShader);
    glAttachShader(shaderProgram, fragmentShader);
    glLinkProgram(shaderProgram);

    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);
}

unsigned int GraphicsEngine::GetShaderProgram()
{
    return shaderProgram;
}