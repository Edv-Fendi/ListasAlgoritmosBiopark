#include <stdio.h>
int main()
{
    int a;
    printf("Digite um numero inteiro:");
    scanf("%d", &a);

    if( ( a % 2 == 0) && (a < 100) )
        printf("O numero e par e menor que 100 1\n");

    else if(( a % 2 == 0) && (a >= 100 ))
        printf("O numero e par e maior ou igual a 100 2 \n");

    if( ( a % 2 != 0) && (a<100) )
        printf("O numero e ímpar e menor que 100 3 \n");
    else if ( ( a % 2 != 0) && (a>=100))

        printf("O numero e impar e maior que 100 4 \n");
}
