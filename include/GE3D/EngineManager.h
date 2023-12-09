#ifndef __ENGINE_MANAGER__
#define __ENGINE_MANAGER__

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <GE3D/Window.h>

class EngineManager
{
public:
    EngineManager();
    EngineManager(GLFWwindow *window);

    void loop();
    void processInput();
private:
    GLFWwindow* managerCurrentWindow;
};

#endif