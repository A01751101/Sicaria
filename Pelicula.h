#ifndef PELICULA_H
#define PELICULA_H

#include <iostream>;
using std::string;
#include "Video.h";
#include "Contenido.h";

class Pelicula: public Video, public Contenido{
    public:
        Pelicula();
        void allVideos();
        void showEP(string nomS);
        void showPeli();

};

#endif