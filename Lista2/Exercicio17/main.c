#include <stdio.h>
#include <stdlib.h>

int main()
{
    int item, quantidade ;
    float resultado;

    printf ("Digite o codigo do item:\n");
    printf("1: Cachorro quente \n");
    printf("2: Bauru \n");
    printf("3: Misto Quente \n");
    printf("4: Hamburger \n");
    printf("5: CheeseBurger \n");
    printf("6: Refrigerante \n");
    scanf ("%d", &item);

    if((item == 1)){
        printf ("Digite quantos itens voce quer: \n");
        scanf ("%d", &quantidade);
        resultado = quantidade * 11.00;
        printf ("O valor total dos itens sera de: %.2f", resultado);
    } else if ((item == 2)){
        printf ("Digite quantos itens voce quer: \n");
        scanf ("%d", &quantidade);
        resultado = quantidade * 8.5;
        printf ("O valor total dos itens sera de: %.2f", resultado);
    } else if ((item == 3)){
        printf ("Digite quantos itens voce quer: \n");
        scanf ("%d", &quantidade);
        resultado = quantidade * 8.00;
        printf ("O valor total dos itens sera de: %.2f", resultado);
    } else if ((item == 4)){
        printf ("Digite quantos itens voce quer: \n");
        scanf ("%d", &quantidade);
        resultado = quantidade * 9.00;
        printf ("O valor total dos itens sera de: %.2f", resultado);
    } else if ((item == 5)){
        printf ("Digite quantos itens voce quer: \n");
        scanf ("%d", &quantidade);
        resultado = quantidade * 10.00;
        printf ("O valor total dos itens sera de: %.2f", resultado);
    }else if ((item == 6)){
        printf ("Digite quantos itens voce quer: \n");
        scanf ("%d", &quantidade);
        resultado = quantidade * 4.50;
        printf ("O valor total dos itens sera de: %.2f", resultado);

    }else {
        printf("Codigo de produto invalido!");
        }


}
