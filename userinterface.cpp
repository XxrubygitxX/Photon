

#include "userinterface.h"



SDL_Window* Photon::window;
SDL_GLContext Photon::context;

bool Photon::opengl_initialized = false;

void Photon::R_InitializeOpenGL(windowparameters_t p_WindowParameters)
{


	if (Photon::opengl_initialized) { return; }

	SDL_Init(SDL_INIT_EVERYTHING);
	

	Photon::window = SDL_CreateWindow(p_WindowParameters.title, p_WindowParameters.x, p_WindowParameters.y, p_WindowParameters.width, p_WindowParameters.height, SDL_WINDOW_HIDDEN | SDL_WINDOW_OPENGL);

	if (!Photon::window) { SDL_Quit(); return; }

	Photon::context = SDL_GL_CreateContext(Photon::window);

	


}

void Photon::R_TerminateOpenGL()
{



	if (!Photon::opengl_initialized || Photon::window || Photon::context) { return; }


	SDL_GL_DeleteContext(Photon::context);

	SDL_DestroyWindow(Photon::window);

	SDL_Quit();

	Photon::opengl_initialized = false;

}



