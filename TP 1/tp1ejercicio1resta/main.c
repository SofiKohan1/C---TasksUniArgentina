#include <stdio.h>
#include <stdlib.h>

/*Escriba un programa que permita al usuario, introducir 2 números enteros por
teclado, y que realice la suma y la resta (la resta del 1ero con el 2do) de ambos
números, mostrando en pantalla el resultado.

*/

//resta

int main()
{
   int a, b, r ; // declaramos variables
    printf("Ingresa numero 1: "); //introducimos numero 1
    scanf ("%d", &a); // decimos que va a ser un numero entero
    printf("Ingresa numero 2: "); // introducimos numero 2
    scanf ("%d", &b); // decimos que es un entero
    r = a - b ; // hacemos la resta de nu8mero 1 y 2
    printf("la resta de sus dos numeros es: %d", r); // resultado de la resta
    return 0;
}
