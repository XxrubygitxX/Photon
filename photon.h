

#ifndef PHOTON_H
#define PHOTON_H






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

	extern bool active;

	extern void R_InitializePhoton();

	extern void R_TerminatePhoton();

}



#endif


