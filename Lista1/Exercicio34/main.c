#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado, area;

    printf("Digite o valor do lado do quadrado: \n");
    scanf("%f", &lado);

    area = lado * lado;

    printf("A area do quadrado e: %.2f", area );

}
