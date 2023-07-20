#ifndef SERIE_H
#define SERIE_H

#include <iostream>;
using std::vector;
using std::string;
#include "Video.h";
#include "Episodio.h";
#include "Contenido.h";

class Serie: public Video, public Contenido{
    private:
        vector<Episodio*> episodios;
    public:
        Serie(string idV1, string nombre1, string duracion1, string genero1, float calificacion1);
        void allVideos();
        void showEp(string nomS);
        void showPeli();
        void addEp(Episodio ep);
};

#endif