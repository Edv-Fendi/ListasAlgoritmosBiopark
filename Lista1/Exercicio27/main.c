#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numeroum, numerodois, total;

    printf("Digite o primeiro numero \n");
    scanf ("%f", &numeroum);
    printf("Digite o segundo numero \n");
    scanf ("%f", &numerodois);

    total = numeroum / numerodois;
    printf ("O resultado da divisao e: %.2f", total);
}
