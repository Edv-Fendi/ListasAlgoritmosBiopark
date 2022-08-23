#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pesoRefeicao;
    float valorFinal;


    printf ("Digite o peso do prato: \n");
    scanf ("%f", &pesoRefeicao);

    valorFinal = pesoRefeicao * 12;
    printf ("Voce vai pagar:%.2f \n", valorFinal);






}
