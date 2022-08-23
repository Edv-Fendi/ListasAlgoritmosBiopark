#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 10\n");

    double pontoX1, pontoY1, pontoX2, pontoY2, distancia;

    printf("Digite o primeiro numero x: \n");
    scanf("%lf", &pontoX1);

    printf("Digite o primeiro numero y: \n");
    scanf("%lf", &pontoY1);

    printf("Digite o segundo numero x: \n");
    scanf("%lf", &pontoX2);

    printf("Digite o segundo numero y: \n");
    scanf("%lf", &pontoY2);

    distancia =  pow(pow(pontoX1 - pontoX2,2) + pow(pontoY1 - pontoY2,2),  0.5);

    printf("A distancia entre os pontos e: %.2lf \n", distancia);


}
