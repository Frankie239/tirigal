#include <iostream>
#include <string>
using namespace std;

int main()
{
    // declarar las variables
    float primerValor = 0;
    float segundoValor = 0;
    float resultado = 0;

    // pedimos el ingreso de los datos.
    cout << "Por favor ingrese el primer valor: " << endl;
    cin >> primerValor;
    cout << "Por favor ingrese el segundo valor: " << endl;
    cin >> segundoValor;

    // sumamos los dos datos
    resultado = primerValor + segundoValor;

    // dividir por la cantidad de numeros. (/2)
    resultado /= 2;

    // mostrar el promedio
    cout << "El resultado es: "<< resultado << endl;
    return 0;
}