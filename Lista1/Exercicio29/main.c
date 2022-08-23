#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precoproduto, precodesconto;

    printf("Digite o preco do produto: \n");
    scanf ("%f", &precoproduto);

    precodesconto = precoproduto * 0.9;

    printf("Com desconto fica: %.2f", precodesconto);
}
