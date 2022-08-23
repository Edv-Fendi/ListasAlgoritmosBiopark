#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, result;

    printf ("Digite o primeiro numero: \n");
    scanf ("%f", &num1);

    printf ("Digite o segundo numero: \n");
    scanf ("%f", &num2);

    if ((num1 > num2)){
        result = num1 - num2;
        printf ("O resultado e: %.2f", result);
    } else if ((num2 > num1)){
        result = num2 - num1;
        printf ("O resultado e: %.2f", result);
    }
}
