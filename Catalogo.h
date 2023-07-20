#ifndef CATALOGO_H
#define CATALOGO_H

#include <iostream>;
#include "Video.h";
using std::vector;

class Catalogo{
    private:
        vector<Video*> videos;
    
    public:
        Catalogo();
        void allVideos();
        void showEp(string nomS);
        void showPeli();
        void addConte(Video vid);
};

#endif