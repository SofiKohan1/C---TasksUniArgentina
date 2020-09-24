#include <stdio.h>
#include <stdlib.h>

/*
Modifique el programa del ejercicio 4, pero esta vez, el incremento debe ser de 5 y el
decremento de 3.
EJ:
Valor: 10
Incremento: 15
Decremento: 7
*/

int main()
{
  int valor;
 int x; //incremento
 int y; // decremento

 printf(" Introducir valor:\n\n\n "); // ingresamos valor
 scanf ("%d", &valor); // decimos que el valor es un entero
 x=valor+5; //incremeto de valor +5

 printf ("\n\n\nIncremento: %d\n\n\n", x); //imprime incremento

 y=valor-3; // decremento valo -3

 printf("\n\n\nDecremento: %d\n\n\n", y); //impreime decremento

return 0;



}
