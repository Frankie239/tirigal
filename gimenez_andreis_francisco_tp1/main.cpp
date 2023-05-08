#include <iostream>
using namespace std;

int main()
{
    //enum con los personajes para tenerlos organizados.
    enum personajes
    {
        Howard,
        Lucien,
        Lydia,
        Faye,
    };

    int personaje = 0;
    string decision = "";

    cout << "Bienvenido a la aventura conversacional de la tragedia en el albergue" << endl;;
    cout << "Howard" << endl;
    cout << "Lucien" << endl;
    cout << "Lydia" << endl;
    cout << "Faye" << endl;

    cin >> personaje;

    switch(personaje)
    {
        case Howard:
            //todo: Presentacion
            cout << "presentacion" << endl;
            //preguntar que parte de la habitacion le gustaria investigar

            cout << "Entras a la habitacion, que te gustaria ir a investigar?" << endl;
            cout << "biblioteca" << endl;
            cout << "escritorio" << endl;
            cin >> decision;
            if(decision == "biblioteca")
            {
                cout << "Te acercas a la biblioteca"
            }
            else if(decision == "escritorio")
            {
                cout << "No ves nada relevante en el escritorio, pero faye se acerca y revisa energicamente una pila de sobres a tu lado. Decides ir a la biblioteca para dejarla sola. "
            }

            cout << "al acercarte ves una biblioteca muy ornamentada en la cual hay dos querubines" << endl;
            bool correcto = false;
            while(!correcto){
                system("clear");
                cout << "Que decides hacer?" << endl;
                cout << "1. Abrir la biblioteca en busca de tus libros" << endl;
                cout << "2. Revisar mas de cerca los dos querubines" << endl;

                if(decision == "1"){
                    cout << "Buscas tus libros, pero solo encuentras libros de ocultimos y enciclopedias. \n
                            Piensas que esto le podria interesar a Lucien";
                }
                else if(decision == "2")
                {
                    cout << "al revisar mas de cerca los Querubines, te das cuenta de que el de la derecha, esta un poco mas inclinado hacia arriba que el de la izquierda";
                    correcto = true;
                }
                else
                {
                    cout << "No conozco ese caracter para este caso, diculpame!";
                }
            }
            break;
        case Howard:
            break;
        case Howard:
            break;
        case Howard:
            break;
    }

    system("clear");
    //Pedir ingreso del nombre
    // dar introduccion de la historia, y de el 
    return 0;
}

