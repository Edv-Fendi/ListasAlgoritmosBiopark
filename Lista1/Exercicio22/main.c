#include <stdio.h>
#include <stdlib.h>

int main()
{
    int moedaumcent, moedacincocent, moedadezcent, moedavintecincocent, moedacinquentacent, moedaumreal;
    float totalmoedas, totalumcent, totalcincocent, totaldezcent, totalvintecincocent, totalcinquentacent, totalumreal;


    printf("Digite quantas moedas de 1 centavo possui: \n");
    scanf("%d", &moedaumcent);

    totalumcent = moedaumcent * 0.01;

    printf("Digite quantas moedas de 5 centavo possui: \n");
    scanf("%d", &moedacincocent);

    totalcincocent = moedacincocent * 0.05;

    printf("Digite quantas moedas de 10 centavo possui: \n");
    scanf("%d", &moedadezcent);

    totaldezcent = moedadezcent * 0.10;

    printf("Digite quantas moedas de 25 centavo possui: \n");
    scanf("%d", &moedavintecincocent);

    totalvintecincocent = moedavintecincocent * 0.25;

    printf("Digite quantas moedas de 50 centavo possui: \n");
    scanf("%d", &moedacinquentacent);

    totalcinquentacent = moedacinquentacent * 0.50;

    printf("Digite quantas moedas de 1 real possui: \n");
    scanf("%d", &moedaumreal);

    totalumreal = moedaumreal * 1.0;

    totalmoedas = totalumcent + totalcincocent + totaldezcent + totalvintecincocent + totalcinquentacent + totalumreal;



    printf("Voce tem em reais:\n%.2f centavos em moedas de 0.01.\n", totalumcent);
    printf("Voce tem em reais:\n%.2f em moedas de cinco\n", totalcincocent);
    printf("Voce tem em reais:\n%.2f em moedas de dez\n", totaldezcent);
    printf("Voce tem em reais:\n%.2f em moedas de vinte cinco\n", totalvintecincocent);
    printf("Voce tem em reais:\n%.2f em moedas de cinquenta\n", totalcinquentacent);
    printf("Voce tem em reais:\n%.2f em moedas de 1 real.\n", totalumreal);
    printf ("Totalizando: %.2f reais", totalmoedas);
}
