#ifndef __GRAPHICS_ENGINE__
#define __GRAPHICS_ENGINE__

#include <GE3D/EngineManager.h>
#include <GLFW/glfw3.h>
#include <glad/glad.h>

class GraphicsEngine
{
public:
    GraphicsEngine();
    ~GraphicsEngine();

    /*! @brief Method used to create and initialize the vertex shader.*/
    void InitVertexShader(const char* vertexShaderSource);

    /*! @brief Method used to create and initialize the fragment shader.*/
    void InitFragmentShader(const char* fragmentShaderSource);

    void ShaderPrograms();

    unsigned int GetShaderProgram();
private:
    unsigned int vertexShader = 0;
    unsigned int fragmentShader = 0;
    unsigned int shaderProgram = 0;
};

#endif