#include <stdio.h>
#include <stdlib.h>
int lerNumeros (int num1);
void logaritmo (int num1);
int main()
{
    int num1, result;

    num1 = lerNumeros(num1);
    logaritmo (num1);
}
int lerNumeros (int num1){

        printf ("Digite um numero: ");
        scanf ("%d", &num1);

    return num1;
}
void logaritmo (int num1){
    int num2 = 0;
    int acumu;

    while (num1 > 11) {
        num2 = num1 / 10;
        acumu++;
        num1 = num2;

    }

    printf ("O valor de logs eh: %d", acumu);
}
