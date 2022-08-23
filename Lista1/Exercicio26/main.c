#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numeroum, numerodois, numerotres, total;

    printf("Digite o primeiro numero \n");
    scanf ("%f", &numeroum);
    printf("Digite o segundo numero \n");
    scanf ("%f", &numerodois);
    printf("Digite o terceiro numero \n");
    scanf ("%f", &numerotres);

    total = numeroum * numerodois * numerotres;
    printf  ("O resultado da multiplicacao e: %.2f", total);

}
