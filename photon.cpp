

#include "photon.h"
#include "userinterface.h"







void Photon::R_InitializePhoton()
{




    Photon::R_InitializeOpenGL(windowparameters_t{"Program", 100, 100, 800, 600});

    SDL_ShowWindow(Photon::window);

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 4);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);




    gladLoadGLLoader(SDL_GL_GetProcAddress);

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

    Photon::active = true;


}





void Photon::R_TerminatePhoton()
{

    Photon::R_TerminateOpenGL();

}
