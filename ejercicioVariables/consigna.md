- ¿Para qué sirven los comentarios en el código? <br>
Los comentarios se utilizan para dejar en claro logica o funcionalidades que podrian quedar fuera de la interpretacion del codigo. De igual manera, los comentarios si son redundante son una distraccion innecesaria y atenta contra buenas practicas de codigo y de codigo limpio. 




- ¿Qué es un bloque de código?<br>
Es un grupo de sentencias o declaraciones que esta delimitado por llaves. Puede ser parte de una funcion o de alguna estrcutura de control. 



- ¿Qué es una advertencia del compilador?<br>
Son advertencias que se dan cuando hay una situacion o anomalia en el codigo que podría causar errores más adelante o en tiempo de ejecución, pero que no rompe con las reglas sintacticas del codigo. 

- ¿Podemos ignorar las advertencias del compilador?<br>
Se pueden ignorar. No es recomendable ya que podrian generar errores a futuro. De igual manera, depende de que tan robusto o seguro queremos que sea el codigo.


- ¿Por qué debería siempre tratar de inicializar una nueva variable con un valor? <br>
Se deberia siempre tratar de inicializar una variable con un valor ya que en cpp no se inicializan de forma automatica con un valor por default como pasa en otros lenguajes. Sino que directamente se le asigna el valor que tenia la posicion de memoria anteriormente. Y podría generar problemas a futuro.



- ¿Por qué los programadores suelen utilizar nombres para las variables como miEntero o miFloat?
Es una forma de tener en cuenta que tipo de dato estamos usando en una variable. Si bien no son muy descriptivas, hay una regla de nomenclatura en la cual se pone como prefijo el tipo de dato y luego se pone el nombre de la variable deseada. 


- ¿Para qué sirven las variables booleanas (bool)?
Las variables booleanas se utilizan para guardar estados true o false. la idea detras de esto es que podamos hacer comparaciones de valores o, por ejemplo agregarle más complejidad a condicionales mediante el guardado de un estado (verdadero/falso)



Ejercicios


1 - ¿Qué es lo que se visualiza por cada línea del siguiente código? Explicar cada resultado.

cout << "Siete dividido tres es " << 7 / 3 << endl;<br>
el resultado es 2. Ya que estamos haciendo una division de int/int

cout << "Siete dividido tres es " << 7.0 / 3 << endl;<br>
El resultado es 2.33333. Ya que estamos haciendo una division de un float sobre un int. 

cout << "Siete dividido tres es " << 7.0 / 3.0 << endl;<br>
El resultado seria 2.33333. Ya que Es una division float/float

2 - Escribir un programa que le pida al usuario que ingrese dos valores (puntajes por ejemplo) y devuelva en pantalla el promedio.<br>
[Solucion](main.cpp)

``` CPP
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
```


3 - Escribir los valores que va teniendo la variable x luego de las siguientes operaciones. Luego verificar haciendo el programa:


Sentencias
Respuesta<br>
int x = 4; x += 4; x es 8<br>
int x = 9; x -= 2; x es 7<br>
int x = 900; x /= 2; x es 450<br>
int x = 50; x *= 2; x es 100 <br>

