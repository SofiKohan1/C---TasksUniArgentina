#include <stdio.h>
#include <stdlib.h>
/*Modificar el programa anterior, pero esta vez para se muestre como resultado, la
multiplicación y la división de los enteros introducidos.
*/
//division

int main()
{
   int a, b, r ; // declaramos variables
    printf("Ingresa numero 1: "); // introducimos numero 1
    scanf ("%d", &a); // decimos que numero 1 es un entero
    printf("Ingresa numero 2: "); //introducimos numero 2
    scanf ("%d", &b); // decimos que numero 2 es un entero
    r = a / b ; // calculamos la division de ambos numeros
    printf("la division de sus dos numeros es: %d", r);// mosntramos el resultado de la divisoin
    return 0;
}
