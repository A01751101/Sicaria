#ifndef CONTENIDO_H
#define CONTENIDO_H

#include <iostream>
#include <string>
using std::string;

class Contenido{
    public:
        virtual void allVideos() = 0;
        virtual void showEp(string nomS) = 0;
        virtual void showPeli() = 0;
};

#endif