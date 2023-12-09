#include <GE3D/Window.h>

Window::Window()
{
    //std::cout << "Window object created" << std::endl;
}

Window::~Window()
{

}

GLFWwindow *Window::getCurrWindow()
{
    return currentWindow;
}

void Window::initWindow(int width, int height, const char* title, GLFWmonitor* monitor, GLFWwindow* share)
{
    try
    {
        currentWindow = glfwCreateWindow(width, height, title, monitor, share);

        glfwMakeContextCurrent(currentWindow);

        //glfwSetFramebufferSizeCallback(currentWindow, framebuffer_size_callback);
    }
    catch(const std::exception& err)
    {
        std::cerr << err.what() << std::endl;
    }
}