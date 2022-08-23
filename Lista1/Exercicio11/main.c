#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dias, mes, anos;

    printf("Informe quantos dias esta sem acidentes: ");
    scanf ("%f", &dias);

    mes = dias / 12.0;
    anos = dias /360.0;

    printf ("\nEsta a %.0f dias sem acidentes", dias);
    printf ("\nEsta a %.1f meses sem acidentes", mes);
    printf ("\nEsta a %.1f anos sem acidentes", anos);



}
