#include <iostream>
using namespace std;

int main()
{
    //enum con los personajes para tenerlos organizados.
    enum personajes
    {
        Howard = 1,
        Lucien,
        Lydia,
        Faye,
    };

    int personaje = 0;
    int decision = 0;
    bool correcto = false;


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
            if(decision == 1)
            {
                cout << "Te acercas a la biblioteca";
            }
            else if(decision == 2)
            {
                cout << "No ves nada relevante en el escritorio, pero faye se acerca y revisa energicamente una pila de sobres a tu lado. Decides ir a la biblioteca para dejarla sola. ";
            }

            cout << "al acercarte ves una biblioteca muy ornamentada en la cual hay dos querubines" << endl;
            while(!correcto){
                cout << "Que decides hacer?" << endl;
                cout << "1. Abrir la biblioteca en busca de tus libros" << endl;
                cout << "2. Revisar mas de cerca los dos querubines" << endl;
                
                cin >> decision;

                if(decision == 1){
                    system("clear");
                    cout << "Buscas tus libros, pero solo encuentras libros de ocultimos y enciclopedias. \n";
                    cout << "Piensas que esto le podria interesar a Lucien" << endl;
                }
                else if(decision == 2)
                {
                    system("clear");
                    cout << "al revisar mas de cerca los Querubines, te das cuenta de que el de la derecha, esta un poco mas inclinado hacia arriba que el de la izquierda" << endl;
                    cout << "Decides girarlo, y para tu sorpresa, se abre un cajon que antes no habias visto." << endl;
                    cout << "Al abrirse el cajon, te das cuenta que hay 3 objetos." << endl;
                    cout << "1. Una daga \n 2. Un libro en un idioma que no conoces \n 3. Una estatuilla humanoide" << endl;
                    correcto = true;
                    cin >> decision;
                    switch(decision){
                        case 1:
                            cout << "La daga";
                            break;
                        case 2: 
                            cout << "El libro";
                            break;
                        case 3:
                            cout << "La estatuilla";
                            break;

                    }
                }
                else
                {
                    cout << "No conozco ese caracter para este caso, diculpame!";
                }
            }
            break;
        case Lucien:
            cout << "Continuar";
            break;
        case Lydia:
            cout << "Continuar";
            break;
        case Faye:
            cout << "Continuar";
            break;
    }

    //Pedir ingreso del nombre
    // dar introduccion de la historia, y de el 
    return 0;
}

