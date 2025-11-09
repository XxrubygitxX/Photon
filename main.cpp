

#include <stdio.h>



#include "photon.h"
#include "userinterface.h"

bool Photon::active = false;











int main()
{

	Photon::R_InitializePhoton();

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





		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		SDL_GL_SwapWindow(Photon::window);




	}

	Photon::R_TerminatePhoton();

	return 0;

}




