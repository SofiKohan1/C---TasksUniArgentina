#include <stdio.h>
#include <stdlib.h>

/*Escriba un programa que permita al usuario, introducir 2 números enteros por
teclado, y que realice la suma y la resta (la resta del 1ero con el 2do) de ambos
números, mostrando en pantalla el resultado.
*/

//suma

int main()
{
int a, b, r ; // declaramos variables
    printf("Ingresa numero 1: "); //ingresamos numero 1
    scanf ("%d", &a); //decimos que numero 1 es un entero
    printf("Ingresa numero 2: "); // ingresamos numero 2
    scanf ("%d", &b); // descimos que numero 2 es un entero
    r = a + b ; // sumo numero uno y dos
    printf("la suma de sus dos numeros es: %d", r); //mostramos el resultado de la suma
    return 0;
}
