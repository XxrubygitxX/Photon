

#ifndef USERINTERFACE_H
#define USERINTERFACE_H












#include <thread>

#include "photon.h"



namespace Photon
{




	

	extern SDL_Window* window;
	extern SDL_GLContext context;

	extern bool opengl_initialized;

	extern void R_InitializeOpenGL(windowparameters_t p_WindowParameters);
	extern void R_TerminateOpenGL();
	
}


#endif

