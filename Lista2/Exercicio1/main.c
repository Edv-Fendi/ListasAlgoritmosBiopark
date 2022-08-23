#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, resultado;

    printf ("Digite um numero: \n");
    scanf ("%d", &num1);

    printf ("Digite um numero: \n");
    scanf ("%d", &num2);

    if ((num1 > num2)){
        printf("O maior numero e: %d", num1);
    } else {
    printf ("O maior numero e: %d", num2);
    }
}
