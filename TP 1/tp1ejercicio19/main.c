#include <stdio.h>
#include <stdlib.h>

/*
Escriba un programa que permita calcular el área y el perímetro de un círculo
cualquiera. El programa al igual que el ejercicio anterior, deberá permitir el ingreso
por teclado de la información necesaria para procesar el cálculo y mostrarlo en
pantalla.
*/

int main()
{
    float area;
    float perimetro;
    float radio;


    printf("Ingrese radio: \n\n");
    scanf("%f",&radio);

    area=3.14*pow(radio,2);

    printf("\n\nEl area del circulo es: %f \n\n", area);

    perimetro=2*3.14*radio;

    printf ("El perimetro de su circulo es: %f\n\n", perimetro);



    return 0;
}
