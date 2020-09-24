#include <stdio.h>
#include <stdlib.h>


/*
Haga un programa que permita dividir dos valores enteros y muestre en pantalla, el
resultado de la división y el resto de dicha operación. Ej. 4/2 = 2 y el resto es 0
*/

int main()
{
     double a, b ; // declaramos variables
     double r;
    printf("Ingresa numero 1: "); // introducimos numero 1
    scanf ("%lf", &a); // decimos que numero 1 es un entero
    printf("Ingresa numero 2: "); //introducimos numero 2
    scanf ("%lf", &b); // decimos que numero 2 es un entero
    r = a / b ; // calculamos la division de ambos numeros
    printf("la division de sus dos numeros es: %lf \n\n\n", r );// mosntramos el resultado de la divisoin


    return 0;

}
