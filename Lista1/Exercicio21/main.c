#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lata, garrafa, pet, litrospet;
    float litroslata, litrosgarrafa, totallitros;


    printf("Quantas latas foram compradas: \n");
    scanf ("%d", &lata);

    printf("Quantas garrafas foram compradas: \n");
    scanf ("%d", &garrafa);

    printf("Quantas garrafas pet foram compradas: \n");
    scanf ("%d", &pet);

    litroslata = lata * 0.35;
    litrosgarrafa = garrafa * 0.60;
    litrospet = pet * 2.0;

    totallitros = litroslata + litrosgarrafa + litrospet;



    printf("Foram comprados %.2f litros de refrigerante.", totallitros);


}
