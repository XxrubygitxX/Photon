

#include <stdio.h>



#include "photon.h"
#include "userinterface.h"









bool Photon::active = false;

float vertices[] =
{

	-0.5f, -0.5f, 0.0f,
	0.5f, -0.5f, 0.0f,
	0.0f,  0.5f, 0.0f

};



int main()
{




	Photon::R_InitializePhoton();

	


	unsigned int vertex_buffer_object;

	glGenBuffers(1, &vertex_buffer_object);

	unsigned int vertex_array_object;

	glGenVertexArrays(1, &vertex_array_object);

	Photon::Shader* vertex_shader = new Photon::Shader("vertex_shader.gl", Photon::Shader::Type::VERTEX_SHADER);

    Photon::Shader* fragment_shader = new Photon::Shader("fragment_shader.gl", Photon::Shader::Type::FRAGMENT_SHADER);

    unsigned int shader_program;

    shader_program = glCreateProgram();

    glAttachShader(shader_program, vertex_shader->GetShader());

    glAttachShader(shader_program, fragment_shader->GetShader());

    glLinkProgram(shader_program);

    delete vertex_shader;

    vertex_shader = nullptr;

    delete fragment_shader;

    fragment_shader = nullptr;

	
	glBindVertexArray(vertex_array_object);

	glBindBuffer(GL_ARRAY_BUFFER, vertex_buffer_object);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);

    glBindBuffer(GL_ARRAY_BUFFER, 0x00); 

    glBindVertexArray(0x00);

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	SDL_Event event;

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

	while (Photon::active)
	{

		while (SDL_PollEvent(&event))
		{

			if (event.type == SDL_QUIT)
			{

				Photon::active = false;

			}

		}

		glUseProgram(shader_program);

		glBindVertexArray(vertex_array_object);

		glDrawArrays(GL_TRIANGLES, 0, 3);



		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		SDL_GL_SwapWindow(Photon::window);




	}

	Photon::R_TerminatePhoton();

	return 0;

}




