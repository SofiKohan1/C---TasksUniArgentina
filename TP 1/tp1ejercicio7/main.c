#include <stdio.h>
#include <stdlib.h>

int main()
{


    int anio1;//año de nacimiento
    int anio2;//año actual
    int edad;
    printf("\n\n\n ¿En que anio naciste?: \n\n\n "); // ingrsamos año en el que nacimos
    scanf ("%d", &anio1);
    printf("\n\n\n ¿En que anio estamos?:  \n\n\n "); // ingresamos año actual
    scanf ("%d", &anio2);

    printf("\n\n\n Tu edad aproximada es: %d \n\n\n ",(anio2-anio1)); // calculamos la edad aproximada

return 0;
}
