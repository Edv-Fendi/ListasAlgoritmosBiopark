#include <stdio.h>
#include <stdlib.h>

int main()
{
    int itens = 0, quantidade;
    float valor, acumulativeValor;


    printf("Digite o numero de itens: \n");
    scanf("%d", &itens);

    for (int i = 1; i <= itens; i++){
            printf ("\nDigite a quantidade do produto %d:\n", i);
            scanf("%d", &quantidade);
            printf("Digite o preco do produto %d: \nR$", i);
            scanf("%f", &valor);


            acumulativeValor =  acumulativeValor + (valor * quantidade);

    }

    printf ("\n\n\n\nO valor da sua compra e: R$%.2f", acumulativeValor);






}
