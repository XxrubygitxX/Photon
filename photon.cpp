

#include "photon.h"
#include "userinterface.h"







void Photon::R_InitializePhoton()
{




    Photon::R_InitializeOpenGL(windowparameters_t{"Program", 100, 100, 800, 600});

    SDL_ShowWindow(Photon::window);

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 4);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);

    gladLoadGLLoader(SDL_GL_GetProcAddress);

    Photon::active = true;


}





void Photon::R_TerminatePhoton()
{

    Photon::R_TerminateOpenGL();

}
