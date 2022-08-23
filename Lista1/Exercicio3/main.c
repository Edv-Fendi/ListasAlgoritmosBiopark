#include <stdio.h>
#include <stdlib.h>


  int main()
{
    float pao, totalpao;
    float broa, totalbroa;
    float poupanca;
    float valorfinal;


    printf ("Quantos paes foram vendidos no dia: \n");
    scanf ("%f", &pao);
    totalpao = pao * 0.12;

    printf ("Quantas broas foram vendidas: \n");
    scanf ("%f", &broa);
    totalbroa = broa * 1.50;

    valorfinal = totalpao + totalbroa;
    printf ("Voce lucrou %.2f com paes hoje, e %.2f com broas, totalizando: %.2f \n", totalpao, totalbroa, valorfinal);

    poupanca = valorfinal * 0.1;
    printf ("Voce deve colocar %.2f no banco: \n", poupanca);

}

