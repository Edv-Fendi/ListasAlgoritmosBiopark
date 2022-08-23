#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado1, lado2, lado3;

    printf("Digite o valor do lado: \n");
    scanf ("%f", &lado1);
    printf("Digite o valor do lado: \n");
    scanf ("%f", &lado2);
    printf("Digite o valor do lado: \n");
    scanf ("%f", &lado3);

    if ((lado1 > lado2+lado3) || (lado2 > lado1+lado3) || (lado3 > lado1+lado2)){
        printf ("Verifique seus dados considerando que:\n");
        printf ("O comprimento de cada lado em um triangulo e menor que a soma dos outros dois lados\n");
        printf ("Equilateros: tem os comprimentos dos tres lados iguais\n");
        printf ("Isosceles: tem os comprimentos de dois lados iguais\n");
        printf ("Escaleno: tem os comprimentos dos tres lados diferentes");
    } else if ((lado1 == lado2) && (lado2 == lado3)){
        printf ("E um triangulo equilatero");
    } else if (((lado1 == lado2) && (lado1 != lado3))){
        printf ("E um triangulo isosceles");
    } else if (((lado2 == lado3) && (lado1 != lado3))){
        printf ("E um triangulo isosceles");
    } else {
        printf ("E um triangulo escaleno");
    }

}
