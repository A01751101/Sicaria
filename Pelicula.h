#ifndef PELICULA_H
#define PELICULA_H

#include <iostream>;
using std::string;
#include "Video.h";
#include "Contenido.h";

class Pelicula: public Video, public Contenido{
    public:
        Pelicula(string idV1, string nombre1, string duracion1, string genero1, float calificacion1);
        void allVideos();
        void showEP(string nomS);
        void showPeli();

};

#endif