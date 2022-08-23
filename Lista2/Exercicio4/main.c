#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, resultado;

    printf ("Digite um numero: \n");
    scanf ("%f", &num1);

    if ((num1 >= 0)){
        resultado = num1 * 2;
        printf ("Resultado: %.2f", resultado);
    }else if ((num1 < 0)){
        resultado = num1 * 3;
        printf ("Resultado: %.2f", resultado);
    }
}

