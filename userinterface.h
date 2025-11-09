

#ifndef USERINTERFACE_H
#define USERINTERFACE_H












#include <thread>

#include "opengl.h"



namespace Photon
{




	typedef struct windowparameters_t
	{

		const char* title;
		unsigned long x;
		unsigned long y;
		unsigned long width;
		unsigned long height;

	} windowparameters_t;

	extern SDL_Window* window;
	extern SDL_GLContext context;

	extern bool opengl_initialized;

	extern void R_InitializeOpenGL(windowparameters_t p_WindowParameters);
	extern void R_TerminateOpenGL();
	
}


#endif

