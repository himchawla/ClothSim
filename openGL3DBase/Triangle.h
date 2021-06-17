#pragma once
#include "Object.h"
class Triangle :
	public Object
{
	GLfloat Vertices[9];
	glm::vec3* vertices[3];
	Triangle(glm::vec3* v1, glm::vec3* v2, glm::vec3* v3)
	{
		vertices[0] = v1;
		vertices[1] = v2;
		vertices[2] = v3;
		init("vertex.vs", "fragment.fs");
	}

	void Render()
	{
		program.useProgram();
		glBindVertexArray(mainVAO);
		
	}
};