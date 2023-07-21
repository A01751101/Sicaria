#include "Video.h"
using std::cout;
using std::endl;

Video::Video(string idV1, string nombre1, string duracion1, string genero1, float calificacion1){
    idV = idV1;
    nombre = nombre1;
    duracion = duracion1;
    genero = genero1;
    calificacion = calificacion1;
}

void Video::muestraDatos(){
    cout << "Titulo: " << nombre << endl;
    cout << "ID: " << idV << endl;
    cout << "Duración: " << duracion << " minutos" << endl;
    cout << "Genero: " << genero << endl;
    cout << "Calificacion: " << calificacion << endl;
}