#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, resultado;

    printf ("Digite um numero");
    scanf ("%d", &num1);

    if ((num1 % 2 == 0))
    {
        resultado = num1 + 5;
        printf ("O resultado e: %d", resultado);

    }
    else
    {
        resultado = num1 + 8;
        printf ("O resultado e: %d", resultado);

    }

}
