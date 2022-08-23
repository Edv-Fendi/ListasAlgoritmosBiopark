#include <stdio.h>
#include <stdlib.h>

int main()
{
    double lado1;
    double lado2;
    double areaTotal;

    printf ("Digite o primeiro numero:");
    scanf ("%lf", &lado1);
    printf ("Digite o segundo numero:");
    scanf ("%lf", &lado2);

    areaTotal = lado1 * lado2;
    printf ("O tamanho do seu terreno e :  %.3lf\n", areaTotal);


}

