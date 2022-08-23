#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, dinheiro, cartao, resultado;
    char forma;
    int parcelas;

    printf ("Digite o valor do produto: \n");
    scanf ("%f", &preco);
    printf ("Selecione a forma de pagamento: \n");
    printf ("1 - Pagamento a vista no dinheiro ou cheque, 10 desconto: \n");
    printf ("2 - Pagamento a vista no cartao de credito, 15 desconto: \n");
    printf ("3 - Pagamento em duas vezes no cartao de credito, sem juros: \n");
    printf ("4 - Pagamento em mais de duas vezes no cartao de credito, 10 juros \n");
    scanf ("%s", &forma);

    if (forma == '1'){
        resultado = preco * 0.90;
        printf ("O valor sera: %.2f", resultado);
    } else if (forma == '2'){
        resultado = preco * 0.85;
        printf ("O valor sera: %.2f", resultado);
    }else if (forma == '3'){
        resultado = preco / 2;
        printf ("O valor sera duas vezes de %.2f", resultado);
    } else if (forma == '4'){

        printf("Digite o numero de vezes: \n");
        scanf("%d", &parcelas);
        resultado = ((preco * 1.10) / parcelas);
        printf ("Cada parcela custara: %.2f, dividos em %dX", resultado, parcelas);
    }





}
