#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cavalos;
    int TotalFerraduras;

    printf ("Digite o numero de cavalos:");
    scanf ("%d", &cavalos);
    TotalFerraduras = cavalos * 4;

    printf ("Voce vai precisar de: %d ferraduras  \n", TotalFerraduras);
}
