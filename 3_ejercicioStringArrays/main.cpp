#include <iostream>
using namespace std;

int main()
{
    string frase = "Esto es una frase.";

    for ( int i = 0; i <= frase.size() - 1; i++ )
    {
        cout << frase[ i ] << endl;
    }

    const int FILAS = 2;
    const int COLUMNAS = 3;

    char tablero[FILAS][COLUMNAS] =
    {
        {'O', 'X', 'O'},
        {' ', 'X', 'X'}
    };

    return 0;
}