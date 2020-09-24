#include <stdio.h>
#include <stdlib.h>

/*
Haga un programa que permita introducir un valor entero por teclado. Almacene
dicho numero en una variable llamada valor.
Luego, incremente valor en 1 y almacene el resultado en otra variable llamada
INCREMENTO.
Luego tomando valor ingresado, almacene en DECREMENTO el numero – 1.
Muestre en pantalla lo que se almacenó en valor, en INCREMENTO y en
DECREMENTO.
EJ:
Introduzca valor: 45
Incremento: 46
Decremento: 44

*/

int main()
{
 int valor;
 int x; //incremento
 int y; // decremento

 printf(" Introducir valor:\n\n\n "); //introducimo valor
 scanf ("%d", &valor); // decimos que valor va a ser un numero entero
 x=valor+1; // incrementamos valor +1

 printf ("\n\n\nIncremento: %d\n\n\n", x); //imrpime incremento

 y=valor-1; //decrementamos el valor en -1

 printf("\n\n\nDecremento: %d\n\n\n", y); // imprime decremento

return 0;

    }
