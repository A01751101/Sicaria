#ifndef SERIE_H
#define SERIE_H

#include <iostream>;
using std::vector;
using std::string;
#include "Video.h";

class Serie: public Video{
    private:
        int cantEps;
    public:
        Serie(string idV1, string nombre1, string duracion1, string genero1, float calificacion1, int cantEps1);
        void muestraDatos();
};

#endif