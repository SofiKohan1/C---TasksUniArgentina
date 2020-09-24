#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
/*
Hacer un programa que permita donde se le solicite que ingrese las iniciales de su
nombre. Deben ser 3 iniciales y se deben ingresar de a una a la vez. Luego, se pide
mostrar en pantalla las tres letras (iniciales) de su nombre, separadas por un (-).
*/

int main()
{

    char a;
    char b;
    char c;


    printf("Ingresar primer inicial: \n\n ");
    scanf ("%c", &a);
    __fpurge(stdin);
    printf("Ingresar segunda inicial: \n\n ");
    scanf ("%c", &b);
    __fpurge(stdin);
    printf("Ingresar tercer incial: \n\n");
    scanf ("%c", &c);
    __fpurge(stdin);
    printf("Las iniciales ingresadas son: %c - %c - %c ", a,b,c);

    return 0;
}
