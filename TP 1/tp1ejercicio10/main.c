#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a, b;
    float valor;


    printf("Introducir numero 1:");
    scanf ("%f", &a);
    printf("Introducir numero 2:");
    scanf ("%f", &b);
    valor = a/b;
    printf("La division de sus numeros es: %f ", valor);

    return 0;
}
