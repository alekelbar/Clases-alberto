#include <iostream>
using namespace std;

// CURSO COMPLETO DE FUNDAMENTOS DE PROGRAMACIÓN.

// TODO
// #1 Estructura de un programa...
// ¿Que es la función main?
// Proceso de compilación... en https://virtual.itca.edu.sv/Mediadores/dlp/11_herramientas_de_programacin.html
int main(int argc, char const *argv[])
{
    cout << "Hola mundo!";
    return 0;
}

// TODO
// #2 Variables y tipos de datos...
// int main(int argc, char const *argv[])
// {
//     // enteros...
//     int edad = 23;
//     // flotantes/decimales
//     float dinero = 2.20f;
//     // decimales de mayor precisión
//     double dinero2 = 2.2222222;
//     // booleanos, algebra de bool
//     bool soltero = false /*O true...*/;
//     // Caracteres...
//     char caracter = 'a';
//     // Cadenas de texto...
//     string cadena = "Hola mundo cruel";

//     cout << "El valor de la variable es: " << edad << endl;
//     return 0;
// }

// TODO
// #3 Entrada y salida de datos...
// int main(int argc, char const *argv[])
// {
//     // enteros...
//     int edad;
//     // flotantes/decimales
//     float dinero;
//     // decimales de mayor precisión
//     double dinero2;
//     // booleanos, algebra de bool
//     bool soltero;
//     // Caracteres...
//     char caracter;
//     // Cadenas de texto...
//     string cadena;

//     cout << "ingrese por teclado el valor: ";
//     cin >> edad;

//     return 0;
// }

// TODO
// #4 estructura secuencial de un programa...
// int main(int argc, char const *argv[])
// {
//     // Ejercicio: calcular la cantidad de segundos en una horas; minutos; segundos...
//     int horas = 10, minutos = 10, segundos = 10;

//     int minutosTotales = horas * 60;
//     int segundosTotales = minutosTotales * 60 + segundos;

//     cout << "segundos totales: " << segundosTotales << endl;
//     return 0;
// }

// TODO
// int main(int argc, char const *argv[])
// {
//     /* Ejercicio: Dato el radio de un circulo, calcular su area, y su perimetro. */
//     // Recordar: area = pi * r^2
//     // Recordar: perimetro = 2 x pi x r

//     return 0;
// }

// TODO
// int main(int argc, char const *argv[])
// {
//     /* Ejercicio dado un total de hombres, y un total de mujeres */
//     // ¿Que porcentaje representan los hombres, y que porcentaje las mujeres.
//     return 0;
// }

// TODO
// int main(int argc, char const *argv[])
// {
//     /* Ejercicio: Una tienda ofrece un descuento del 15% */
//     // Un cliente desea saber, en función de lo que pagara.
//     // ¿Cuanto es su descuento?
//     return 0;
// }

// TODO
// #5 Condicionales...
// int main(int argc, char const *argv[])
// {
//     // condicionales simples...
//     bool condicion = true;

//     if (condicion)
//     {
//         cout << "hello world" << endl;
//     }

//     // condicionales dobles...
//     if (condicion)
//     {
//         cout << "hello world" << endl;
//     }
//     else
//     {
//         cout << "goodbye world" << endl;
//     }

//     // condicionales multiples...
//     switch ('a')
//     {
//     case 'a':
//         cout << "Es una a" << endl;
//         break;
//     case 'e':
//         cout << "Es una e" << endl;
//         break;
//     case 'i':
//         cout << "Es una i" << endl;
//         break;
//     case 'o':
//         cout << "Es una o" << endl;
//         break;
//     case 'u':
//         cout << "Es una u" << endl;
//         break;
//     default:
//         cout << "no es una vocal" << endl;
//         break;
//     }
//     return 0;
// }

// TODO
// #6 Operadores https://learn.microsoft.com/es-es/cpp/cpp/cpp-built-in-operators-precedence-and-associativity?view=msvc-170
// int main(int argc, char const *argv[])
// {
//     // Ejercicio condicionales y operadores relacionales
//     // Una discoteca necesita un sistema para determinar que personas pueden o no entrar...
//     // solo pueden entrar aquello mayores de 18.

//     return 0;
// }

// TODO
// int main(int argc, char const *argv[])
// {
//     // Ejercicio: Dada una letra, decir si es una vocal
//     return 0;
// }

// TODO
// int main(int argc, char const *argv[])
// {
//     // Ejercicio; Saber si un numero es par...
//     return 0;
// }

// TODO
// int main(int argc, char const *argv[])
// {
//     // Data una calificación determinar si el alumno aprueba o no.
//     // Un alumno aprueba si su calificación es mayor de 5. Las calificaciones cumplen que
//     // 0 < b < 10
//     return 0;
// }

// TODO
// int main(int argc, char const *argv[])
// {
//     // Ejercicio, dados 3 numeros, imprimir el numero mayor...
//     return 0;
// }

// TODO

// int main(int argc, char const *argv[])
// {
//     // Ejercicio, mostrar un día de la semana de acuerdo a su numero correspondiente...
//     return 0;
// }

// TODO

// #7 bucles, o estructuras repetitivas...
// int main(int argc, char const *argv[])
// {
//     // Explicación del bucle for...en dos direcciones...
//     return 0;
// }

// TODO

// int main(int argc, char const *argv[])
// {
//     // Explicación del bucle while...en dos direcciones...
//     return 0;
// }

// TODO

// int main(int argc, char const *argv[])
// {
//     // Explicación del bucle do-while...en dos direcciones...
//     return 0;
// }

// TODO
// int main(int argc, char const *argv[])
// {
//     // Ejercicio: Calcular el factorial de manera iterativa, puede usar el bucle de su preferencia.
//     return 0;
// }
// TODO
// int main(int argc, char const *argv[])
// {
//     // Ejercicio: sumar las cifras de un numero...
//     return 0;
// }
// TODO
// int main(int argc, char const *argv[])
// {
//     // Ejercicio; hacer un programa que pida numeros indefinidos hasta que se ingrese un cero.
//     // al final decir la suma de los numeros ingresados...
//     return 0;
// }
// TODO
// #8 Arreglos...
int main(int argc, char const *argv[])
{
    // Un arreglo es una estructura de datos que bajo el mismo nombre almacena una
    // colección de datos del mismo tipo(podría decirse que es un grupo de variables, con un nombre en común).
    
    int array[] = {5, 4, 3, 2, 1};

    // para referirse a una posición en particular, podemos referirnos a esta con un indice.
    // recordando que en los arreglos las posiciones inician desde cero...

    // por ejemplo, para acceder al 3, alojado en el arreglo, usaré array[2]

    // Podemos acostumbrarnos 
    return 0;
}
// TODO
