#include "./../include/solution1.hpp"
#include <iostream>

// !OBJETIVO
// * 1) Objetivo:
// * - ¿Donde quiero llegar?
// * - ¿Hasta donde llegar?

// !BUSCAR UNA SOLUCIÓN
// * 2) Construir el algoritmo verbal.
// * - Describir con palabras el problema, y darle una solución.

// !DEFINIR LA SOLUCIÓN COMO UN ALGORITMO (TRANSCRIPCIÓN)
// * 3) Construir un algoritmo formal.
// * - Generar pseudo código para solucionar el problema.
// * - Realizar un prueba de escritorio.

// !DIGITACIÓN
// * 4) Brindar una solución computacional.
// * - Escribir un programa.
// * - compilar y probar la solución.

/**
 * @brief Function to count how many white spaces have a string
 * @param toCount is the target string
 * @return the number of white spaces
 */
int whiteSpaces(std::string toCount)
{
  // TODO; PASO 1)
  //  *- Quiero contar todos los espacios en blanco de una cadena, sin importar
  //  *- los demás caracteres...

  // TODO; PASO 2)
  //  *- Para lograrlo, voy a recorrer cada caracter de la cadena, y voy a compararlos
  //  *- cada vez que encuentre un espacio, voy aumentar un contador, y al finalizar
  //  *- el contador me dira, cuantos espacios tenia.

  // TODO; PASO 3)
  // !DATOS DEL ALGORITMO
  //  * - Algoritmo: Espacios en blanco.
  //  * - Datos de entrada; La cadena toCount
  //  * - Proceso; Realizar el algoritmo verbal del paso 2
  //  * - Datos de Salida; La cantidad de espacios en blanco.

  // !PROCESO
  //  * - 0: DECLARAR count = 0;
  //  * - 1: PARA cada letra en la cadena toCount;
  //  * - 2:   SI letra es igual a ' ';
  //  *-  3:      count = count + 1;
  //  *-  4: DEVOLVER count;

  // TODO; PASO 4)
  // ! solución computacional
  int count = 0;
  for (size_t i = 0; i < toCount.length(); i++)
  {
    if (toCount.at(i) == ' ')
    {
      count = count + 1;
    }
  }
  return count;
}

// !RAZONES DE FALLO.
// * - No teníamos claro el objetivo y fallamos en todo el proceso

// * - No realizamos bien la prueba de escritorio y nos la saltamos
// * creyendo que el algoritmo estaba bien

// * - No  conocíamos  bien  las  reglas  sintácticas  del  lenguaje
// * con  el  que  pensábamos  trabajar  y  el  programa  transcrito
// * final  terminó  siendo  una  representación  técnica  diferente
// * del  algoritmo inicial
