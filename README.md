
# Curso de fundamentos de programación

## Índice
- [Charla de un estudiante a otro…](#l-0)
- [Introducción a la programación y a C++](#l-1)
- [Entrada y salida de datos](#l-2)
- [Estructuras de control de flujo](#l-3)
- [Funciones y procedimientos](#l-4)
- [Arreglos y matrices](#l-5)
- [Punteros y referencias](#l-6)
- [Estructuras y uniones](#l-7)
- [Archivos y streams](#l-8)
- [Programación orientada a objetos](#l-9)
- [Herencia y polimorfismo](#l-10)
- [Excepciones y manejo de errores](#l-11)
- [Programación genérica y templates](#l-12)
- [Algoritmos y estructuras de datos](#l-13)
- [STL (Standard Template Library)](#l-14)

## <a id="l-0"></a>Lección 0: Charla de un estudiante a otro, y las reglas a cumplir como estudiante de tutorías.
- Registro en Replit: https://replit.com
- Instalación de TeamViewer
- 
## <a id="l-1"></a>Lección 1: Introducción a la programación y a C++ (1 horas)

- Conceptos básicos de programación: algoritmos, variables, tipos de datos, operadores, etc.
- Introducción a C++: historia, características, instalación del compilador y del entorno de desarrollo.
### Contenido
- Variables: En programación, una variable es un espacio de memoria reservado en el ordenador para almacenar un valor. Las variables pueden contener diferentes tipos de datos, como números, caracteres, cadenas de texto, etc. El valor de una variable puede ser modificado en cualquier momento durante la ejecución del programa.
- Tipos de datos: Los tipos de datos son una categoría de valores que pueden ser manipulados en un programa. En C++, existen varios tipos de datos, como enteros, números de coma flotante, caracteres, cadenas de texto, booleanos, entre otros. Cada tipo de dato tiene un rango de valores posibles y una precisión específica.
- Operadores: Los operadores son símbolos que se utilizan para realizar operaciones matemáticas o lógicas en un programa. Por ejemplo, los operadores aritméticos como la suma (+) y la resta (-) se utilizan para realizar operaciones matemáticas, mientras que los operadores lógicos como AND (&&) y OR (||) se utilizan para evaluar expresiones lógicas. Los operadores pueden ser unarios (actúan sobre un solo operando) o binarios (actúan sobre dos operandos).

C++ es un lenguaje de programación de alto nivel y de propósito general que fue desarrollado a partir del lenguaje C en la década de 1980. Fue creado por Bjarne Stroustrup, quien trabajaba en Bell Labs en ese momento. La idea principal detrás del desarrollo de C++ fue combinar las características de C con las características de la programación orientada a objetos.

C++ se ha convertido en uno de los lenguajes de programación más populares y se utiliza en una amplia variedad de aplicaciones, incluyendo sistemas operativos, juegos, aplicaciones empresariales y científicas, entre otras.

Algunas de las características principales de C++ incluyen:
- Orientación a objetos: C++ es un lenguaje de programación orientada a objetos, lo que significa que permite la creación de objetos que contienen tanto datos como métodos.
- Eficiencia: C++ se diseñó para ser un lenguaje de programación de bajo nivel que permite un alto rendimiento y una buena utilización de los recursos del sistema. Esto lo hace ideal para aplicaciones que requieren una gran cantidad de procesamiento o para sistemas con recursos limitados.
- Flexibilidad: C++ es un lenguaje de programación muy flexible que permite a los desarrolladores elegir entre diferentes estilos de programación, como la programación orientada a objetos, la programación genérica y la programación procedural.
- Portabilidad: C++ es un lenguaje de programación portátil que se puede compilar en diferentes sistemas operativos y arquitecturas de hardware.
Biblioteca estándar: C++ cuenta con una amplia biblioteca estándar que proporciona una gran cantidad de funciones y clases útiles para el desarrollo de aplicaciones. Esta biblioteca incluye componentes para la entrada y salida de datos, manejo de archivos, procesamiento de cadenas de texto, matemáticas, y mucho más.

## Proceso de compilación y ejecución en C++:
- Escritura del código fuente: El primer paso en el desarrollo de un programa en C++ es escribir el código fuente en un editor de texto. El código fuente es un conjunto de instrucciones escritas en lenguaje C++ que definen el comportamiento del programa.
- Compilación: Una vez que se ha escrito el código fuente, se debe compilar para crear un archivo ejecutable que pueda ser ejecutado por el sistema operativo. La compilación es el proceso de traducir el código fuente en un código objeto que puede ser interpretado por el sistema.
- Preprocesamiento: Antes de que se pueda compilar el código fuente, se debe realizar un preprocesamiento en el archivo de código fuente. El preprocesamiento implica la expansión de cualquier directiva de preprocesador en el archivo fuente, como #include, #define y #ifdef.
- Compilación: Una vez que se ha realizado el preprocesamiento, el código fuente se compila en un código objeto. El compilador C++ analiza el código fuente y lo traduce a un lenguaje de bajo nivel que puede ser ejecutado por el sistema operativo.
- Enlace: Una vez que se han compilado todos los archivos objeto, se deben vincular para crear un archivo ejecutable. El proceso de enlace implica la combinación de todos los archivos objeto en un solo archivo ejecutable.
- Ejecución: Una vez que se ha creado el archivo ejecutable, se puede ejecutar el programa en el sistema operativo. El sistema operativo carga el programa en la memoria y lo ejecuta según las instrucciones definidas en el archivo ejecutable.

En resumen, el proceso de compilación y ejecución en C++ implica la escritura del código fuente, la compilación del código fuente en un archivo objeto, el enlace de los archivos objeto en un archivo ejecutable y, finalmente, la ejecución del programa en el sistema operativo.

## <a id="l-2"></a>Lección 2: Entrada y salida de datos (2 horas)
- Entrada y salida de datos: cin, cout, cerr, clog.
- Formato de entrada y salida de datos.
- Ejemplos prácticos de uso.

## CIN
Es un operador de entrada de datos que se utiliza para leer valores desde el teclado. Permite al usuario introducir datos que serán almacenados en variables. Su sintaxis es la siguiente:

```cin >> variable;```

## COUT
Es un operador de salida de datos que se utiliza para mostrar información en la pantalla. Permite imprimir en la consola de salida valores almacenados en variables, constantes y mensajes de texto. Su sintaxis es la siguiente:

cout << "mensaje o valor: " << variable << endl;

## CERR
Es un operador de salida de datos que se utiliza para mostrar mensajes de error en la consola de salida estándar. Permite imprimir mensajes de error en la pantalla cuando ocurren situaciones inesperadas durante la ejecución del programa. Su sintaxis es la siguiente:

```cerr << "mensaje de error";```

## CLOG
Es un operador de salida de datos que se utiliza para mostrar mensajes en la consola de salida estándar. Permite imprimir mensajes en la pantalla para proporcionar información adicional sobre el proceso de ejecución del programa. Su sintaxis es similar a la de cerr:

```clog << "mensaje de información";```

## Formato de entrada de datos

El formato de entrada y salida de datos en C++ se refiere a la forma en que se muestran o se leen los valores en la pantalla y en los archivos de texto. C++ ofrece varias formas de controlar el formato de los datos que se leen o se muestran en la consola o en un archivo, lo que puede ser muy útil para mejorar la legibilidad de la información que se está manipulando.

Para la salida de datos, C++ proporciona un conjunto de manipuladores que permiten controlar el formato de los datos que se muestran en la pantalla o se escriben en un archivo. Algunos de los manipuladores más comunes son:

- setw: Permite especificar el ancho del campo de salida para un valor determinado.
- setprecision: Permite controlar la cantidad de dígitos que se muestran después del punto decimal para valores de tipo float y double.
- fixed y scientific: Permite elegir entre el formato de punto flotante fijo o notación científica para los valores de tipo float y double.
- left y right: Permite alinear a la izquierda o derecha los valores en el campo de salida.

Por ejemplo, se puede mostrar un número flotante con dos decimales de la siguiente manera:

```
float valor = 3.1416;
cout << fixed << setprecision(2) << valor << endl;
```
La salida de este código sería 3.14.

Para la entrada de datos, C++ ofrece la posibilidad de validar que los valores introducidos por el usuario cumplan con ciertas restricciones o formatos específicos. Por ejemplo, se puede validar que el usuario haya introducido un número entero utilizando el siguiente código:

```
int valor;
cin >> valor;

if(cin.fail()) {
    // Error, el usuario no ha introducido un número entero
}
```
En este ejemplo, se comprueba si ha habido un fallo en la entrada de datos, lo que indicaría que el usuario ha introducido un valor que no se puede convertir a un número entero.

En resumen, el formato de entrada y salida de datos en C++ permite controlar la forma en que se muestran o se leen los valores, lo que puede ser muy útil para mejorar la legibilidad y precisión de la información que se está manipulando.

Ejemplo de entrada y salida de datos:

Supongamos que estamos construyendo un programa para calcular el índice de masa corporal (IMC) de una persona. Para ello, necesitamos pedir al usuario que introduzca su peso y su altura. Podemos hacer esto utilizando el objeto cin de la siguiente manera:

```
float peso, altura;
cout << "Introduce tu peso (en kg): ";
cin >> peso;

cout << "Introduce tu altura (en m): ";
cin >> altura;
```

Una vez que hemos recogido los datos, podemos calcular el IMC y mostrar el resultado utilizando el objeto cout:

```
float imc = peso / (altura * altura);
cout << "Tu IMC es: " << imc << endl;
```

Ejemplo de formato de entrada y salida de datos:

Supongamos que queremos mostrar una tabla de valores en la que cada fila tenga tres columnas: el nombre de una persona, su edad y su altura. Para hacerlo, podemos utilizar manipuladores de formato para asegurarnos de que cada columna tenga el ancho adecuado y esté alineada correctamente. Por ejemplo:


```
#include <iostream>
#include <iomanip> // Para utilizar los manipuladores de formato

using namespace std;

int main() {
    cout << setw(20) << left << "Nombre" << setw(10) << "Edad" << setw(10) << "Altura" << endl;

    cout << setw(20) << left << "Juan Perez" << setw(10) << 25 << setw(10) << fixed << setprecision(2) << 1.75 << endl;

    cout << setw(20) << left << "Maria Gomez" << setw(10) << 32 << setw(10) << fixed << setprecision(2) << 1.65 << endl;

    cout << setw(20) << left << "Pedro Ramirez" << setw(10) << 45 << setw(10) << fixed << setprecision(2) << 1.80 << endl;

    return 0;
}
```

En este ejemplo, utilizamos los manipuladores setw para establecer el ancho de cada columna, left para alinear el texto a la izquierda, y fixed y setprecision para mostrar la altura con dos decimales. La salida resultante sería:

```
Nombre              Edad    Altura    
Juan Perez          25      1.75      
Maria Gomez         32      1.65      
Pedro Ramirez       45      1.80      
```
Este ejemplo muestra cómo los manipuladores de formato pueden ser útiles para mostrar los datos de una manera clara y organizada, lo que puede ser especialmente importante cuando se trabaja con grandes cantidades de información.


## <a id="l-3"></a>Lección 3: Estructuras de control de flujo (2 horas)
- Estructuras de control de flujo: if, switch, while, do-while, for.
- Ejemplos prácticos de uso.

Las estructuras de control de flujo son herramientas esenciales en la programación que nos permiten controlar el orden y la repetición de las instrucciones que se ejecutan en un programa. A continuación, te explicaré cada una de ellas:

if: El if es una estructura de control condicional que se utiliza para ejecutar un bloque de código si se cumple una condición determinada. Por ejemplo:

```
int x = 10;
if (x > 5) {
    cout << "x es mayor que 5";
}
```
En este caso, la condición x > 5 se evalúa como verdadera, por lo que se ejecutará la instrucción dentro del bloque de código del if.

switch: El switch es otra estructura de control condicional que permite ejecutar diferentes bloques de código según el valor de una variable. Por ejemplo:

```
int opcion = 2;
switch (opcion) {
    case 1:
        cout << "Opción 1 seleccionada";
        break;
    case 2:
        cout << "Opción 2 seleccionada";
        break;
    default:
        cout << "Opción no válida";
}
```

En este caso, se evalúa el valor de la variable opcion y se ejecuta el bloque de código correspondiente a cada caso. Si la variable no coincide con ningún caso, se ejecuta el bloque de código del default.

while: El while es una estructura de control de repetición que permite ejecutar un bloque de código mientras se cumpla una condición determinada. Por ejemplo:

```
int x = 0;
while (x < 10) {
    cout << x << endl;
    x++;
}
```
En este caso, se ejecutará el bloque de código dentro del while mientras la variable x sea menor que 10.

do-while: El do-while es otra estructura de control de repetición que funciona de manera similar al while, pero asegura que el bloque de código se ejecutará al menos una vez, incluso si la condición no se cumple. Por ejemplo:

```
int x = 0;
do {
    cout << x << endl;
    x++;
} while (x < 10);
```
En este caso, se ejecutará el bloque de código dentro del do al menos una vez, y luego se comprobará la condición del while.

for: El for es otra estructura de control de repetición que se utiliza para ejecutar un bloque de código un número determinado de veces. Por ejemplo:

```
for (int i = 0; i < 10; i++) {
    cout << i << endl;
}
```
En este caso, se ejecutará el bloque de código dentro del for 10 veces, ya que la variable i se inicializa en 0, se ejecuta mientras i sea menor que 10, y se incrementa en 1 en cada iteración.

Ejemplos practicos:

- if
```
int age = 20;
if (age >= 18) {
    cout << "Eres mayor de edad." << endl;
} else {
    cout << "Eres menor de edad." << endl;
}
```
En este ejemplo, se utiliza una estructura de control if para verificar si una persona es mayor o menor de edad, basándose en su edad. Si la edad es mayor o igual a 18, se imprime el mensaje "Eres mayor de edad", de lo contrario se imprime "Eres menor de edad".

- Switch
```
int option = 3;
switch (option) {
    case 1:
        cout << "Opción 1 seleccionada." << endl;
        break;
    case 2:
        cout << "Opción 2 seleccionada." << endl;
        break;
    case 3:
        cout << "Opción 3 seleccionada." << endl;
        break;
    default:
        cout << "Opción no válida." << endl;
        break;
}
```
En este ejemplo, se utiliza la estructura de control switch para realizar diferentes acciones en función del valor de la variable option. Si option es igual a 1, se imprime "Opción 1 seleccionada", si es igual a 2 se imprime "Opción 2 seleccionada", si es igual a 3 se imprime "Opción 3 seleccionada", y si no se cumple ninguno de estos casos se imprime "Opción no válida".

- While:
```
int i = 0;
while (i < 10) {
    cout << i << endl;
    i++;
}
```
En este ejemplo, se utiliza la estructura de control while para imprimir los números del 0 al 9. Mientras i sea menor que 10, se imprimirá el valor de i y se incrementará en 1. Este proceso se repetirá hasta que i sea igual a 10.

- Do-while:
```
int i = 0;
do {
    cout << i << endl;
    i++;
} while (i < 10);
```
Este ejemplo es similar al anterior, pero utiliza la estructura de control do-while. En este caso, se imprime el valor de i y se incrementa en 1, y luego se verifica si i es menor que 10. Si es así, se repite el proceso, de lo contrario se sale del ciclo.

- For:
```
for (int i = 0; i < 10; i++) {
    cout << i << endl;
}
```
En este ejemplo, se utiliza la estructura de control for para imprimir los números del 0 al 9. La variable i se inicializa en 0, y mientras i sea menor que 10 se imprimirá su valor y se incrementará en 1. Este proceso se repetirá hasta que i sea igual a 10.

## <a id="l-4"></a>Lección 4: Funciones y procedimientos (2 horas)
- Funciones y procedimientos: definición, - parámetros, valores de retorno.
- Ejemplos prácticos de uso.

## <a id="l-5"></a>Lección 5: Arreglos y matrices (2 horas)
- Arreglos: definición, acceso a elementos, inicialización.
- Matrices: definición, acceso a elementos, inicialización.
- Ejemplos prácticos de uso.

## <a id="l-6"></a>Lección 6: Punteros y referencias (2 horas)
- Punteros y referencias: definición, operaciones básicas.
- Ejemplos prácticos de uso.

## <a id="l-7"></a>Lección 7: Estructuras y uniones (2 horas)
-Estructuras: definición, acceso a miembros, inicialización.
- Uniones: definición, uso, comparación con estructuras.
- Ejemplos prácticos de uso.

## <a id="l-8"></a>Lección 8: Archivos y streams (2 horas)
- Archivos y streams: apertura, lectura y escritura de archivos.
- Ejemplos prácticos de uso.

## <a id="l-9"></a>Lección 9: Programación orientada a objetos (2 horas)
- Conceptos básicos de la programación orientada a objetos: clases, objetos, atributos, métodos.
- Introducción a la sintaxis de C++ para programación orientada a objetos.
- Ejemplos prácticos de uso.

## <a id="l-10"></a>Lección 10: Herencia y polimorfismo (2 horas)
- Herencia: definición, uso, clases base y clases derivadas.
- Polimorfismo: definición, uso, clases abstractas y clases concretas.
- Ejemplos prácticos de uso.
## <a id="l-11"></a>Lección 11: Excepciones y manejo de errores (2 horas)
- Excepciones: definición, uso, captura de excepciones.
- Manejo de errores: try, catch, throw.
- Ejemplos prácticos de uso.

## <a id="l-12"></a>Lección 12: Programación genérica y templates (2 horas)
- Programación genérica: definición, uso, ventajas.
- Templates: definición, uso, funciones y clases templates.
- Ejemplos prácticos de uso.

## <a id="l-13"></a>Lección 13: Algoritmos y estructuras de datos (2 horas)
- Algoritmos: definición, uso, complejidad.
Estructuras de datos: pilas, colas, listas, árboles.
- Ejemplos prácticos de uso.
Lección 14: STL (Standard Template Library) (2 horas)

## <a id="l-14"></a>Lección 14: STL (Standard Template Library) (2 horas)
- Introducción

## Recomendación personal

[Curso de C++(Busquen la lista de reproducción en su canal)](https://youtu.be/dJzLmjSJc2c)

## Playground - Práctica sin instalar nada.

[Replit para practicar tú código](https://replit.com/join/okrobaiyqw-alekelbar)

## Autor

- [@alekelbar - Contacto](https://linktr.ee/alekelbar)


## 🚀 Sobre mi

I'm a React.js developer. A passionate programmer and student at the National University of Costa Rica. Actually, I'm graduated like informatic applications programmer, from the same university.

I'm studying the rest of bachelor degree, 3 of 4 years were completed.


## 🛠 Habilidades y conocimientos
<p align="center"> 
  </a> 
  <a href="https://www.w3.org/html/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/html5/html5-original-wordmark.svg" alt="html5" width="40" height="40"/>
  </a> 
  <a href="https://www.w3schools.com/css/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/css3/css3-original-wordmark.svg" alt="css3" width="40" height="40"/>
  </a> 
    <a href="https://www.typescriptlang.org/" target="_blank" rel="noreferrer"> 
    <img src="https://cdn.worldvectorlogo.com/logos/typescript.svg" alt="bootstrap" width="40" height="40"/>
   <a href="https://developer.mozilla.org/en-US/docs/Web/JavaScript" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/javascript/javascript-original.svg" alt="javascript" width="40" height="40"/>
  </a> 
    <a href="https://reactjs.org/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/react/react-original-wordmark.svg" alt="react" width="40" height="40"/>
  </a> 
  <a href="https://nextjs.org/" target="_blank" rel="noreferrer"> <img src="https://cdn.worldvectorlogo.com/logos/nextjs-2.svg" alt="nextjs" width="40" height="40"/> 
  </a> 
  <a href="https://mui.com/" target="_blank" rel="noreferrer"> <img src="https://cdn.worldvectorlogo.com/logos/material-ui-1.svg" alt="nextjs" width="40" height="40"/> 
  </a> 
    <a href="https://tailwindcss.com/" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/tailwindcss/tailwindcss-icon.svg" alt="tailwind" width="40" height="40"/> </a> 
    <a href="https://getbootstrap.com" target="_blank" rel="noreferrer"> 
    <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/bootstrap/bootstrap-plain-wordmark.svg" alt="bootstrap" width="40" height="40"/>
        <a href="https://www.mongodb.com/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/mongodb/mongodb-original-wordmark.svg" alt="mongodb" width="40" height="40"/> 
  </a> 
        <a href="https://nodejs.org" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/nodejs/nodejs-original-wordmark.svg" alt="nodejs" width="40" height="40"/> 
  </a> 
  <a href="https://expressjs.com" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/express/express-original-wordmark.svg" alt="express" width="40" height="40"/>
  </a>   
  <a href="https://graphql.org" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/graphql/graphql-icon.svg" alt="graphql" width="40" height="40"/> 
  </a> 
    <a href="https://redux-toolkit.js.org" target="_blank" rel="noreferrer"> <img src="https://cdn.worldvectorlogo.com/logos/redux.svg" alt="mongodb" width="40" height="40"/> 
    <a href="https://socket.io/" target="_blank" rel="noreferrer"> <img src="https://cdn.worldvectorlogo.com/logos/socket-io.svg" alt="mongodb" width="40" height="40"/> 
  </a> 
</p>

