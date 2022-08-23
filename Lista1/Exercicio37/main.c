#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero, um, dois, tres, quatro, cinco, seis, sete, oito, nove, dez;

    printf("Digite um numero para consultar a tabuada do 0 ao 10: ");
    scanf("%f", &numero);

    um = numero * 1.0;
    dois = numero * 2.0;
    tres = numero * 3.0;
    quatro = numero * 4.0;
    cinco = numero * 5.0;
    seis = numero * 6.0;
    sete = numero * 7.0;
    oito = numero * 8.0;
    nove = numero * 9.0;
    dez = numero * 10.0;

    printf("%.2f x 1 = %.2f", numero, um);
    printf("\n%.2f x 2 = %.2f", numero, dois);
    printf("\n%.2f x 3 = %.2f", numero, tres);
    printf("\n%.2f x 4 = %.2f", numero, quatro);
    printf("\n%.2f x 5 = %.2f", numero, cinco);
    printf("\n%.2f x 6 = %.2f", numero, seis);
    printf("\n%.2f x 7 = %.2f", numero, sete);
    printf("\n%.2f x 8 = %.2f", numero, oito);
    printf("\n%.2f x 9 = %.2f", numero, nove);
    printf("\n%.2f x 10 = %.2f", numero, dez);


}
