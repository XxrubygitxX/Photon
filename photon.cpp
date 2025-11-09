

#include "photon.h"
#include "userinterface.h"







void Photon::R_InitializePhoton()
{




    Photon::R_InitializeOpenGL(windowparameters_t{"Program", 100, 100, 800, 600});


}





void Photon::R_TerminatePhoton()
{

    Photon::R_TerminateOpenGL();

}
