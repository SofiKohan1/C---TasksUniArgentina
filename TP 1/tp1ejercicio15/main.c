#include <stdio.h>
#include <stdlib.h>

/*
Haga un programa donde se deban introducir 2 valores enteros por teclado. El primer
valor se debe guardar en una variable llamada a. El 2do en otra llamada b. Luego el
programa debe resolver la ecuación: (a-b) (a+b)
*/

int main()
{
    int a;
    int b;
    int resta;
    int suma;
    int ecuacion;


    printf("Introducir valor a: \n\n");
    scanf ("%d", &a);
    printf("Introducir valor b: \n\n");
    scanf ("%d", &b);
    printf("Ahora con los valores a y b resolveremos la ecuacion. \n\n");
    resta = a - b;
    suma = a + b;
    ecuacion = suma*resta;

    printf("el resultado de la ecuacion es; %d \n\n", ecuacion);


    return 0;
}
