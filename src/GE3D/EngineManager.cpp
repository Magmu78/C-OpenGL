#include <GE3D/EngineManager.h>

EngineManager::EngineManager()
{
    //std::cout << "EngineManager object created" << std::endl;
}

EngineManager::EngineManager(GLFWwindow *window)
{
    if(window != nullptr)
    {
        managerCurrentWindow = window;
    }
    else
    {
        std::cerr << "Error : the EngineManager(GLFWwindow* window) constructor failed to execute because window is a null pointer" << std::endl;
    }
}

void EngineManager::loop()
{
    processInput();
}

void EngineManager::processInput()
{
    if(glfwGetKey(managerCurrentWindow, GLFW_KEY_ESCAPE) == GLFW_PRESS)
    {
        glfwSetWindowShouldClose(managerCurrentWindow, true);
    }
}