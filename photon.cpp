

#include "photon.h"
#include "userinterface.h"







void Photon::R_InitializePhoton()
{




    Photon::R_InitializeOpenGL(windowparameters_t{"Program", 100, 100, 800, 600});

    SDL_ShowWindow(Photon::window);

    
    
    
    
    SDL_GL_MakeCurrent(Photon::window, Photon::context);

    gladLoadGLLoader(SDL_GL_GetProcAddress);

    

    gladLoadGL();

    Photon::active = true;




    
}





void Photon::R_TerminatePhoton()
{

    Photon::R_TerminateOpenGL();

}
