#include <stdio.h>
#include <stdlib.h>
/*Fa�a um algoritmo que leia dois valores inteiros A e B se os valores forem iguais dever� se somar os dois,
caso contr�rio multiplique A por B. Ao final, apresente o resultado.
*/

int main()
{
    float num1, num2, resultado;

    printf ("Digite o primeiro numero: \n");
    scanf ("%f", &num1);

    printf ("Digite o segundo numero: \n");
    scanf ("%f", &num2);

    if ((num1 == num2)){
        resultado = num1 + num2;
        printf("O resultado e: %.2f", resultado);

    } else if (num1 != num2){
        resultado = num1 * num2;
        printf ("O resultado e: %.2f", resultado);
    }

}
