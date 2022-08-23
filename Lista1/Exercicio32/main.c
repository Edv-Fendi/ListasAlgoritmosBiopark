#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kg, gramas;

    printf("Digite seu peso em kg: \n");
    scanf("%f", &kg);

    gramas = kg * 1000;
    printf("Seu peso em gramas e: %.1f", gramas);
}
