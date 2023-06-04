/*************************************************************************\
 El clásico juego del ahorcado.
\*************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

// Incluimos esta librería para poder usas la función toupper() que
// permite convertir los caracteres a mayúsculas.
#include <cctype>

using namespace std;

char InputYMayuscula(){
    cout << "\nIngrese una letra: ";
    char letra;
    cin >> letra;
    return toupper( letra );
}

bool EstaLetraEnVector(string palabra, char letra)
{
    return palabra.find( letra ) != string::npos;
}
int main()
{
  // Definimos una constante para tener el valor máximo de oportunidades.
  const int MAX_OPORTUNIDADES = 8;

  // Lista de palabras para ser adivinadas.
  vector<string> palabras;
  palabras.push_back( "ADIVINAR" );
  palabras.push_back( "AHORCADO" );
  palabras.push_back( "DIFICIL" );
  palabras.push_back( "INFORMATICA" );
  palabras.push_back( "ALGORITMO" );

  // Organizamos la lista en un orden aleatorio.
  srand( time( 0 ) );
  random_shuffle( palabras.begin(), palabras.end() );

  // La palabra que se debe adivinar.
  // Creamos un string constante y le asignamos la palabra que haya
  // quedado en la posición 0 del vector palabras.
  const string LA_PALABRA = palabras[ 0 ];

  // Cantidad de letras incorrectas.
  int letrasIncorrectas = 0;

  // Creamos el string 'miPalabra' que en un principio tiene guiones en
  // el lugar de cada caracter de LA_PALABRA.
  string miPalabra( LA_PALABRA.size(), '-' );

  // Declaro un string 'letrasUsadas' donde voy a ir guardando las
  // letras que han sido ingresadas.
  string letrasUsadas;

  // Ciclo Principal:
  // Continua mientras no nos pasemos de la cantidad de oportunidades
  // y no se haya adivinado la palabra.
  while( ( letrasIncorrectas < MAX_OPORTUNIDADES ) && ( miPalabra != LA_PALABRA ) )
  {
    system( "clear" );
    cout << "Bienvenido al Ahorcado. Buena suerte!\n";
    cout << "\nLe quedan " << ( MAX_OPORTUNIDADES - letrasIncorrectas );
    cout << " intentos.\n";
    cout << "\nYa ha ingresado las siguientes letras:\n" << letrasUsadas << endl;
    cout << "\nHasta el momento, la palabra es:\n" << miPalabra << endl;

    char letra;
    letra = InputYMayuscula();
    // Verificamos que la letra ingresada no haya sido ingresada
    // anteriormente. Cuando find() NO encuentra lo buscado devuelve un
    // 'string::npos'.
    // Si encuentra la letra, find() devuelve la posición:
    // (un valor int) != string::npos -> TRUE (queda en el while)
    // Si No encuentra la letra queda:
    // string::npos != string::npos -> FALSO (sale del while)
    while(EstaLetraEnVector(letrasUsadas, letra))
    {
      cout << "\nYa ha ingresado la letra " << letra << endl;
      letra = InputYMayuscula();
    }

    letrasUsadas += letra;

    // Ahora vemos si la letra está en LA_PALABRA. 
    if( EstaLetraEnVector(LA_PALABRA,letra))
    {
      cout << "Correcto! La letra " << letra << " está en la palabra.\n";

      // Actualizamos 'miPalabra' incluyéndole la letra encontrada. 
      // Recorremos el string que tiene la 'LA_PALABRA' que hay que
      // encontrar para ver en que posición se encuentra la letra
      // ingresada y asignamos en esa posición la letra en 'miPalabra'.
      for( int i = 0; i < LA_PALABRA.length(); i++ )
      {
        if( LA_PALABRA[ i ] == letra )
        {
          miPalabra[ i ] = letra;
        }
      }
    }
    else
    {
      // En el caso de que la letra no está en la palabra incrementamos
      // 'letrasIncorrectas'.
      cout << "Lo lamento, la letra " << letra << " no está en la palabra.\n";
      letrasIncorrectas++;
    }
    cin.ignore().get();
  }

  // Al salir del while evaluamos si ganó o perdió.
  if( letrasIncorrectas == MAX_OPORTUNIDADES )
    cout << "\n¡Lo siento, usted ha sido colgado!";
  else
    cout << "\n¡Felicitaciones, ha adivinado la palabra!";

  // Para terminar mostramos cual era LA_PALABRA.
  cout << "\nLa palabra era " << LA_PALABRA << endl;

  cout << endl;
  cin.ignore().get();
  return 0;
}