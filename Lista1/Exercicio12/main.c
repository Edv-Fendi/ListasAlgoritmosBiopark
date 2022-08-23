#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, imposto, aumento;

    printf("Digite seu salario atual: ");
    scanf("%f", &salario);

    aumento = salario * 1.15;
    imposto = aumento * 0.92;

    printf("O salario inicial era de %.2f, com aumento foi para %.2f, com desconto o valor liquido vai ser de: %.2f", salario, aumento, imposto);
}
