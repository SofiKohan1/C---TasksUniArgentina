#include <stdio.h>
#include <stdlib.h>

/*
Hacer un Programa que permita calcular las raíces de una función cuadrática (X1 y X2).
Los valores de a, b y c deberán ser ingresados por teclado.
*/

int main()
{

float a;
float b;
float c;
float p1;
float p2;
float p3;
float p4;
float p5;
float x1;
float x2;

printf("Ingrese valor a: \n\n");
scanf("%f",&a);
printf("Ingrese valor b: \n\n");
scanf("%f",&b);
printf("Ingrese valor c: \n\n");
scanf("%f",&c);

p1=-b;
p2= pow (b,2);
p3= p2-4*a*c;
p4= sqrt(p3);
p5= p4/2*a;
x1=p1+p5;
x2=p1-p5;

printf("Las raices X1 y X2 son: %f %f", x1, x2);


    return 0;
}
