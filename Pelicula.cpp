#include "Pelicula.h"
using std::cout;
using std::endl;

Pelicula::Pelicula(string idV1, string nombre1, string duracion1, string genero1, float calificacion1):Video(idV1, nombre1, duracion1, genero1, calificacion1){
    idV = idV1;
    nombre = nombre1;
    duracion = duracion1;
    genero = genero1;
    calificacion = calificacion1;
}

void Pelicula::muestraDatos(){
    cout << "----- Película -----" << endl;
    Video::muestraDatos();
}

string Pelicula::getNombre(){
    return nombre;
}

float Pelicula::getCalif(){
    return calificacion;
}

void Pelicula::setCalif(float calif1){
    calificacion = (calificacion+calif1)/2;
}