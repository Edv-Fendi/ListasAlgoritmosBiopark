#include <stdio.h>
#include <stdlib.h>

int main()
{
    int camisaP, camisaG, camisaM, total;

    printf("Digite quantas camisa P foram vendidas: ");
    scanf("%d", &camisaP);

    printf("Digite quantas camisa M foram vendidas: ");
    scanf("%d", &camisaM);

    printf("Digite quantas camisa G foram vendidas: ");
    scanf("%d", &camisaG);

    total = (camisaP * 10) + (camisaM * 12) + (camisaG * 15);

    printf ("Foi arrecadado %.d reais com vendas. ", total);
}
