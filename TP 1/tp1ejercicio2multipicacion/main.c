#include <stdio.h>
#include <stdlib.h>


/*Modificar el programa anterior, pero esta vez para se muestre como resultado, la
multiplicación y la división de los enteros introducidos.

*/

//multiplicacion

int main()
{
    int a, b, r ; // declaramos variables
    printf("Ingresa numero 1: "); //introducimos numero 1
    scanf ("%d", &a); //decimos que nuermo 1 es un entero
    printf("Ingresa numero 2: "); // introducimos numero 2
    scanf ("%d", &b); // decimos que el nuermo 2 es un entero
    r = a * b ; // multiplicamos el numero 1 y 2
    printf("la multiplicacion de sus dos numeros es: %d", r); //mostramos el resultado de la multiplicacion
    return 0;

}
