#include <stdio.h>
#include <stdlib.h>


/*
Modifique el programa anterior para que los números ingresados sean decimales,
pero esta vez debe mostrarlos uno debajo del otro
*/

int main()
{
     float a, b, c;



   printf("Introducir numero 1: \n\n");
   scanf ("%f", &a);
   printf("Introducir nuemro 2: \n\n");
   scanf ("%f", &b);
   printf("Introducir nuemro 3: \n\n");
   scanf ("%f", &c);


   printf("Los numeros infgresados en orden inverso son: \n %f \n %f \n %f \n", c, b, a );

    return 0;
}
