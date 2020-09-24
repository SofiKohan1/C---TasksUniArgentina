#include <stdio.h>
#include <stdlib.h>

/*
Escriba un programa que permita al usuario, introducir 3 números enteros por
teclado, y que los visualice en pantalla, en el orden inverso al que fueron introducidos.
*/

int main()
{
   int a, b, c;
;


   printf("Introducir numero 1: \n\n");
   scanf ("%d", &a);
   printf("Introducir nuemro 2: \n\n");
   scanf ("%d", &b);
   printf("Introducir nuemro 3: \n\n");
   scanf ("%d", &c);


   printf("Los numeros infgresados en orden inverso son: %d \t %d \t %d \t", c, b, a );

    return 0;
}
