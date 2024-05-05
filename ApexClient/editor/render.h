#pragma once
#include <glad/glad.h>
#include <cstring>
#include <string>
#include <GLFW/glfw3.h>
#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
class Render
{
public:
	Render();
	~Render();
	void drawSeer();
private:
	unsigned int shaderProgram;
	unsigned int VAO;
};

