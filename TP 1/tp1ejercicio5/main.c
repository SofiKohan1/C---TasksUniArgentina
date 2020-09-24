#include <stdio.h>
#include <stdlib.h>

int main()
{
        int numero; // declaramos variable
    printf("Ingresar un numero: "); //imrpimimos variable
    scanf ("%d", &numero);
    if ((numero%2) ==0)  // determinamos si el numero es par o impar
    {
        printf(" \n\n\n\n Es par \n\n\n\n\n\t\t"); // resultaod en caso de que el numero sea par
    }

    else

    {
        printf(" \n\n\n\n\n\n Es impar \n\n\n\n\n\n "); // resultado en caso de que el numero sea impar


    }

    return 0; // finalizamos programa
}
