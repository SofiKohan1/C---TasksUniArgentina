#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa que permita ingresar una X cantidad de días, y que como
resultado, muestre en pantalla, la cantidad de minutos y segundos que hay en esa X
cantidad de días.
*/

int main()
{
    int dias;
    int tiempo1;
    int tiempo2;
    int minutos=1440;
    int segundos =86400;


    printf("Introducir cantidad de dias:");
    scanf ("%d", &dias);

    tiempo1 = minutos*dias;

    tiempo2 = segundos*dias;

    printf("La cantidad de minutos es: %d \n\n", tiempo1);

    printf("La cantidad de segundos es: %d \n\n", tiempo2);
    return 0;
}
