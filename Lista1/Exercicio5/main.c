#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precoGasolina;
    float valorGanho;
    float litrosTanque;

    printf ("Digite quanto foi ganho na viagem: \n");
    scanf ("%f", &valorGanho);
    printf ("Digite o preco da gasolina: \n");
    scanf ("%f", &precoGasolina);

    litrosTanque = valorGanho / precoGasolina;

    printf ("Voce vai conseguir abastecer %.1f litros de gasolina", litrosTanque);

}
