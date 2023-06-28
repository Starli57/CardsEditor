#pragma once

#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"

#include <glad/glad.h> 
#include <GLFW/glfw3.h> 
#include <string>

#include "Di.h"
#include "Logger.h"

class SceneContext
{
public:

	SceneContext();
	~SceneContext();
	void Prepare();
	void Finalize();

	GLFWwindow* GetWindow();
	std::string GetGlslVersion();

private:

	GLFWwindow* _window;
};

