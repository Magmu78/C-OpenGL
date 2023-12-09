#ifndef __WINDOW__
#define __WINDOW__

#include <GLFW/glfw3.h>
#include <glad/glad.h>
#include <exception>
#include <iostream>
#include <GE3D/Prerequisites.h>

class Window
{
public:
    Window();
    ~Window();

    /*! @brief Creates the window and configures some other OpenGL stuff like the window context. */
    void initWindow(int width, int height, const char* title, GLFWmonitor* monitor, GLFWwindow* share);

    /*! @brief Returns a GLFWwindow pointer */
    GLFWwindow* getCurrWindow();

private:
    GLFWwindow* currentWindow = nullptr;
};

#endif