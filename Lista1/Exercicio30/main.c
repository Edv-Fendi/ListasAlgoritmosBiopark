#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salariofixo, vendas, comissao, salariofinal;

    printf ("Digite o salario fixo: \n");
    scanf ("%f", &salariofixo);

    printf ("Digite quanto voce vendeu: \n");
    scanf ("%f", &vendas);

    comissao = vendas * 0.04;

    salariofinal = salariofixo + comissao;
    printf ("O salario total vai ser: %.2f", salariofinal);



}
