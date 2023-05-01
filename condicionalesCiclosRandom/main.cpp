// Ejemplo declaración switch-case

#include <iostream>
using namespace std;

int main()
{
    bool correcto = false;
    unsigned short int numero;

#pragma region Ejercicio 1

    enum dificultad
    {
        Facil = 1,
        Normal = 2,
        Dificil = 3
    };

    // El ciclo se repetirá indefinidamente hasta que la opción ingresada
    // sea correcta.
    while (!correcto)
    {
        system("clear"); // Para borrar la consola

        cout << "Nivel de dificultad\n\n";
        cout << "1 - Fácil\n";
        cout << "2 - Normal\n";
        cout << "3 - Difícil\n\n";

        cout << "Ingrese Opción: ";
        cin >> numero;

        // Es como si fuese una especie de IF anidados.
        switch (numero)
        {
            // Si 'numero' es '1' entonces hacer esto...
        case Facil:
            cout << "Seleccionó nivel Fácil."
                 << endl;
            correcto = true;
            break;   // Salir
        case Normal: // Si 'numero' es '2' hacer esto...
            cout << "Seleccionó nivel Normal." << endl;
            correcto = true;
            break;
        case Dificil:
            cout << "Seleccionó nivel Difícil." << endl;
            correcto = true;
            break;
        default: // Si no es ninguna opción válida entonces...
            cout << "¡Opción incorrecta!\n"
                 << endl;

            // Hacemos una pausa hasta que se presione una tecla
            cout << "Presione ENTER para continuar..." << endl;
            cin.ignore().get();

            correcto = false;
            break;
        }
    }

    cout << "\nArrancamos el juego con la dificultad seleccionada!";

    cout << endl;
#pragma endregion
#pragma region Ejercicio 2

    int x = 1;
    while (x)
    {
        x++;
        cout << x << endl;
    }
#pragma endregion
#pragma region Ejercicio 3
    // Le doy un numero a la maquina
    // La maquina genera un numero aleatorio
    // si el numero aleatorio es mas grande, hago que los siguientes aleatorios sean mas chicos que el numero generado,
    srand(time(0));

    // Valores aleatorios entre 1 y 100 usando el módulo:
    int numeroSecreto = 0;

    int intentos = 0;
    int valor;
    int valorMinimo = 1;
    int valorMaximo = 100;
    int valorAdivinado;

    cout << "\tBienvenido a Adivina el Número\n\n";
    while (numeroSecreto < 1 && numeroSecreto > 100)
    {
        cout << "Ingrese un numero para que la maquina adivine" << endl;
        cin >> numeroSecreto;
    }

    do
    {
        valorAdivinado = rand() % (valorMaximo - valorMinimo + 1) + valorMinimo;
        intentos++;

        if (valorAdivinado > numeroSecreto)
        {
            cout << "el varlor" << valorAdivinado << "Demasiado alto!\n\n";
            valorMaximo = valorAdivinado - 1;
        }
        else if (valorAdivinado < numeroSecreto)
        {
            cout << "el varlor" << valorAdivinado << "Demasiado bajo!\n\n";
            valorMinimo = valorAdivinado + 1;
        }
        else
        {
            cout << "La máquina adivino el número (" << valorAdivinado << ") después de " << intentos << " intentos!\n";
        }

    } while (valorAdivinado != numeroSecreto);

    cout << endl;
#pragma endregion
#pragma region Ejercicio 4
    x = 0;
    int y = 0;

    cout << "Ingrese el primer valor" << endl;
    cin >> x;
    cout << "Ingrese el segundo valor" << endl;
    cin >> y;
    if (x > y)
    {
        cout << "La variable x es mayor." << endl;
    }
    else if (y > x)
    {
        cout << "La variable y es mayor." << endl;
    }
    else
        cout << "Ambas variables son iguales" << endl;
#pragma endregion
#pragma region Ejercicio 5:
    enum razas
    {
        Humanos = 1,
        Elfos,
        Gnomos,
        Enanos,
        Semiorcos
    };
    bool correcta = false;

    while (!correcta)
    {
        system("clear");

        cout << "Seleccione una raza:" << endl;
        cout << "1. Humanos" << endl;
        cout << "2. Elfos" << endl;
        cout << "3. Gnomos" << endl;
        cout << "4. Enanos" << endl;
        cout << "5. Semiorcos" << endl;

        int opcion;
        cin >> opcion;

        switch (opcion)
        {
        case Humanos:
            cout << "Los humanos constituyen la raza predominante en Faerum. Gobiernan la mayoría de los reinos e imperios más importantes en los Reinos Olvidados." << endl;
            correcta = true;
            break;

        case Elfos:
            cout << "Los elfos son normalmente más bajos y delgados que los humanos. Sus rasgos son finos y delicados, hablan con entonación melódica. Se les considera frívolos y distantes." << endl;
            correcta = true;
            break;

        case Gnomos:
            cout << "Emparentados con los enanos, los gnomos son significativamente más pequeños que sus primos lejanos. Los gnomos, como ellos mismos sostienen con orgullo, son también menos rechonchos que los enanos." << endl;
            correcta = true;
            break;

        case Enanos:
            cout << "Los enanos son unos individuos pequeños y robustos, fácilmente reconocibles por su forma y estatura. Tienen los mofletes rosados y los ojos y el cabello oscuros. Los enanos tienden a ser ariscos." << endl;
            correcta = true;
            break;

        case Semiorcos:
            cout << "Estos individuos, famosos por su gran fuerza, son el fruto de la unión de un progenitor humano y otro orco. Poseen la misma estatura que los humanos, pero pesan algo más debido a su complexión musculosa." << endl;
            correcta = true;
            break;

        default:
            cout << "Opción inválida." << endl;
            cin.ignore().get();
            break;
        }
    }
#pragma endregion
#pragma region Ejercicio 6:
    int i = 1;
    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }

    i = 10;
    while (i >= 1)
    {
        cout << i << endl;
        i--;
    }

    i = 2;
    while (i <= 20)
    {
        cout << i << endl;
        i += 2;
    }

    i = 1;
    while (i <= 16)
    {
        cout << i << " - " << i * i << endl;
        i++;
    }
#pragma endregion
#pragma region Ejercicio 7
    int suma = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Va por el numero: " << i << endl;
        suma += i;
    }
    cout << "La suma de los valores del 1 al 10 es: " << suma << endl;

    for (int i = 6; i <= 30; i += 6)
    {
        cout << i << endl;
    }

    for (int i = 1; i <= 16; i++)
    {
        cout << i << " - " << i * i << endl;
    }
#pragma endregion

    return 0;
}