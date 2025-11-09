

#include "userinterface.h"



SDL_Window* Photon::window;
SDL_GLContext Photon::context;

bool Photon::opengl_initialized = false;

void Photon::R_InitializeOpenGL(windowparameters_t p_WindowParameters)
{


	if (Photon::opengl_initialized) { return; }

	SDL_Init(SDL_INIT_EVERYTHING);
	
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 4);

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
	

	Photon::window = SDL_CreateWindow(p_WindowParameters.title, p_WindowParameters.x, p_WindowParameters.y, p_WindowParameters.width, p_WindowParameters.height, SDL_WINDOW_HIDDEN | SDL_WINDOW_OPENGL);

	if (!Photon::window) { SDL_Quit(); return; }

	Photon::context = SDL_GL_CreateContext(Photon::window);

	
	Photon::opengl_initialized = true;

}

void Photon::R_TerminateOpenGL()
{



	if (!Photon::opengl_initialized || !Photon::window || !Photon::context) { return; }


	SDL_GL_DeleteContext(Photon::context);

	SDL_DestroyWindow(Photon::window);

	SDL_Quit();

	Photon::opengl_initialized = false;

}



