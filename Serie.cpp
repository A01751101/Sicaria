#include "Serie.h"
using std::cout;
using std::endl;

Serie::Serie(string idV1, string nombre1, string duracion1, string genero1, float calificacion1, int cantEps1):Video(idV1, nombre1, duracion1, genero1, calificacion1){
    idV = idV1;
    nombre = nombre1;
    duracion = duracion1;
    genero = genero1;
    calificacion = calificacion1;
    cantEps = cantEps1;
}

void Serie::muestraDatos(){
    cout << "----- Serie -----" << endl;
    Video::muestraDatos();
    cout << "Cantidad de episodios: " << cantEps << endl;
}

string Serie::getNombre(){
    return nombre;
}

float Serie::getCalif(){
    return calificacion;
}

void Serie::setCalif(float calif1){
    calificacion = (calificacion+calif1)/2;
}