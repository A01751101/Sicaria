#include "Catalogo.h"
using std::cout;
using std::cin;
using std::endl;

Catalogo::Catalogo(){
    // Instanciar 3 películas
    Pelicula pelicula1("BRB001", "BARBIE", "120", "Comedia", 4);
    Pelicula pelicula2("ECSN02", "EL Cascanueces", "90", "Navidad", 2);
    Pelicula pelicula3("MCU12", "Avengers", "180", "Accion", 5);

    // Instanciar 2 series
    Serie serie1("PCYOS", "Pocoyo", "45", "Infantil", 3, 10);
    Serie serie2("METH1", "Breaking Bad", "100", "Drama", 5,12);

     // Agregar los objetos a la lista
    videos.push_back(&pelicula1);
    videos.push_back(&pelicula2);
    videos.push_back(&pelicula3);
    videos.push_back(&serie1);
    videos.push_back(&serie2);

     // Mostrar el reporte de objetos
    int opcion;
    cout<<"Para ver peliculas escriba 1. Para calificar un video escriba 2."<<endl;
    cin>>opcion;

    if (opcion == 1)
    {
        for (const auto& video : videos){
            cout<<video->getNombre()<<endl;
        }
    }
    else if (opcion == 2)
    {
        string usrinput;
        cout<<"Ingrese el nombre del video que desea buscar:"<<endl;
        cout<<"BARBIE"<<endl<<"EL Cascanueces"<<endl<<"Avengers"<<endl<<"Pocoyo"<<endl<<"Breaking bad"<<endl<<endl;
        cin>>usrinput;
        for (const auto& video : videos) {
            if (usrinput.compare(video->getNombre()) == 0)
            {
                cout << endl;
                video->muestraDatos();
                cout << endl;
                float calif;
                cout<<"Ingrese la calificación que desea darle del 1-5:"<<endl;
                cin>>calif;
                video->setCalif(calif);
                cout<<endl;
                video->muestraDatos();
            }
        }
    }
}