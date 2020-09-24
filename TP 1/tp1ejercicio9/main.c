#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int aux;

    printf("Ingrese numero 1: \n\n ");
    scanf ("%d", &a);
    printf("Ingrse numero 2: \n\n");
    scanf ("%d", &b);
    aux=a;
    a=b;
    b=aux;
    printf("Los valores intercambados son: %d %d", a,b);

    return 0;
}
