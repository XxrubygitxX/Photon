

#include "shader.h"




Photon::Shader::Shader(const char* p_Path, Shader::Type p_Type)
{

    std::ifstream file = std::ifstream(p_Path);

    std::string shader = std::string((std::istreambuf_iterator<char>(file)), (std::istreambuf_iterator<char>()));

    const char* shader_to_compile = shader.c_str();

    this->index = glCreateShader(p_Type);

    glShaderSource(this->index, 1, &shader_to_compile, NULL);

    glCompileShader(this->index);

}



unsigned int Photon::Shader::GetShader()
{

    return this->index;

}

Photon::Shader::~Shader()
{

    glDeleteShader(this->index);

}