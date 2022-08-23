#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, result100, result50, result10, result5, result1;

    printf("Digite o valor: \n");
    scanf ("%d", &valor);

    if((valor >= 100)){
        result100 = valor / 100;
        printf ("O valor sera de %d\n", result100);
    }
    valor= valor-result100*100;
    if (( valor >= 50)){
            result50 = valor / 50;
        printf ("O resultado e: %d\n",  result50);
    }
    valor= valor-result50*50;
    if (( valor >= 10)){
            result10 = valor  / 10;
        printf ("O resultado e: %d\n", result10);
    }
    valor = valor - result10 * 10;

    if (( valor >= 5)){
            result5 = valor / 5;
        printf ("O resultado e: %d \n", result5);

    }
    valor = valor - result5 * 5;
    if ((valor>= 1)){
            result1 = valor / 1;
        printf ("O resultado e: %d", result1);
    }

}
