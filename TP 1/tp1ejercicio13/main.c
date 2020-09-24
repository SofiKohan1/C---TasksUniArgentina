#include <stdio.h>
#include <stdlib.h>

/*
Escriba un programa que permita calcular la superficie de un triángulo rectángulo. El
programa debe permitir el ingreso de los valores por teclado y mostrar el resultado
por pantalla.*/

int main()
{

    int base;
    int altura;
    int superficie;

    printf("Introducir base: \n\n");
    scanf ("%d", &base);
    printf("Introducir altura: \n\n");
    scanf ("%d", &altura);
    superficie = base*altura;
    printf("La superficie del triangulo rectangulo es: %d \n\n", superficie);


    return 0;
}
