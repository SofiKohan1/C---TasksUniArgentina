#include <stdio.h>
#include <stdlib.h>

/*
Haga un programa que permita calcular el área y el perímetro de cuadrado. El
programa deberá preguntar los valores de los lados y almacenar dichos valores,
considerando que pueden ser enteros o con decimales.
*/


int main()
{
    float area;
    float perimetro;
    float lado;


    printf("Vamos a calcular el area de un cuadrado. \n\n");
    printf("introducir datos: \n\n");
    scanf ("%f", &lado);
    area = lado*lado;
    printf("El area del cuadrado es: %f \n\n", area);

    printf("Ahora vamos a calcular el perimetro de un cuadrado. \n\n");
    printf("Introducir datos: \n\n");
    scanf ("%f", &lado);
    perimetro = 4*lado;
    printf("El perimetro del cuadrado es: %f \n\n", perimetro);


    return 0;
}
