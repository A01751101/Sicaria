#ifndef CATALOGO_H
#define CATALOGO_H

#include <iostream>
#include "Video.h"
#include "Pelicula.h"
#include "Serie.h"
using std::vector;

class Catalogo{
    private:
        vector<Video*> videos;
    
    public:
        Catalogo();
};

#endif