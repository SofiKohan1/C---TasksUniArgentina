#include <stdio.h>
#include <stdlib.h>

/*
scriba un programa que permita ingresar un número por teclado y muestre en
pantalla, ese número elevado al cuadrado y el mismo número elevado al cubo.
*/
int main()
{
    int a;
    int cuadrado;
    int cubo;

    printf("Ingrese numero: \n\n");
    scanf("%d", &a);

    cuadrado=a*a;

    printf("El cuadrado es: %d\n\n",cuadrado);

    cubo=a*a*a;

    printf("El cubo es: %d \n\n", cubo);


    return 0;
}
