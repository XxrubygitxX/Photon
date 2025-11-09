

#ifndef SHADER_H
#define SHADER_H






#include <string>
#include <fstream>

#include "opengl.h"

namespace Photon
{



class Shader
{

    public:


        typedef enum Type
        {

            VERTEX_SHADER = GL_VERTEX_SHADER,
            FRAGMENT_SHADER = GL_FRAGMENT_SHADER,
            GEOMETRY_SHADER = GL_GEOMETRY_SHADER

        } Type;

        Shader(const char* p_Path, Type p_Type);

        unsigned int GetShader();

        virtual ~Shader();

    private:


        unsigned int index;



};

}






#endif