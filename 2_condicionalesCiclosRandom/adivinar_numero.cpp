#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    // Valores aleatorios entre 1 y 100 usando el módulo:
    int numeroSecreto = 0;

    int intentos = 0;
    int valor;
    int valorMinimo = 1;
    int valorMaximo = 100;
    int valorAdivinado;

    cout << "\tBienvenido a Adivina el Número\n\n";
    while (numeroSecreto < 1 || numeroSecreto > 100)
    {
        cout << "Ingrese un numero para que la maquina adivine" << endl;
        cin >> numeroSecreto;
    }

    do
    {
        // Creo un rango para que se pueda generar un numero. la suma de valor minimo alfinal es para que no de numeros negativos.
        valorAdivinado = rand() % (valorMaximo - valorMinimo + 1) + valorMinimo;
        intentos++;

        if (valorAdivinado > numeroSecreto)
        {
            cout << "el varlor " << valorAdivinado << " es Demasiado alto!\n\n";
            valorMaximo = valorAdivinado - 1;
        }
        else if (valorAdivinado < numeroSecreto)
        {
            cout << "el varlor " << valorAdivinado << " es demasiado bajo!\n\n";
            valorMinimo = valorAdivinado + 1;
        }
        else
        {
            cout << "La máquina adivino el número (" << valorAdivinado << ") después de " << intentos << " intentos!\n";
        }

    } while (valorAdivinado != numeroSecreto);

    cout << endl;
    return 0;
}
