#include <stdio.h>
#include <stdlib.h>

int main()
{
    float diagonalmaior, diagonalmenor, area;

    printf("Digite a diagonal maior:");
    scanf ("%f", &diagonalmaior);

    printf("Digite a diagonal menor:");
    scanf ("%f", &diagonalmenor);

    area = (diagonalmaior * diagonalmenor) / 2;

    printf("A area do losango e: %.2f", area);

}
