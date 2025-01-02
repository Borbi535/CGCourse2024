#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

#define QUI __LINE__,__FILE__

// funzioni con controllo degli errori

static GLFWwindow* xglfwCreateWindow(int width, int height, const char* title, GLFWmonitor* monitor, GLFWwindow* share, int linea, const char* file)
{
	GLFWwindow* window = glfwCreateWindow(1000, 800, "something", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		std::cout << "Linea: " << linea << " File: " << file << std::endl;
		exit(1);
	}
	return window;
}