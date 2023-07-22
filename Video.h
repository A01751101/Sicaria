#ifndef VIDEO_H
#define VIDEO_H

#include <iostream>
using std::string;
using std::vector;

class Video{
    protected:
        string idV, nombre, duracion, genero;
        float calificacion;

    public:
        Video(string idV1, string nombre1, string duracion1, string genero1, float calificacion1);
        void muestraDatos();
        string getNombre();
        float getCalif();
        void setCalif(float calif1);
};

#endif