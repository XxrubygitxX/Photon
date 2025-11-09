

#ifndef SHADER_H
#define SHADER_H






class Shader
{

    
    
    
    typedef enum Type
    {

        VERTEX_SHADER,
        FRAGMENT_SHADER,
        GEOMETRY_SHADER

    } Type;

    public:



        Shader(const char* p_Path, Type p_Type);

        virtual ~Shader();

    private:


        unsigned int index;



        


};



#endif