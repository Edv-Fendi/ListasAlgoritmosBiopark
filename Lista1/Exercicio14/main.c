#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio, area;

    printf ("Digite o raio da pizza: ");
    scanf ("%f", &raio);

    area = 3.14 *(raio * raio);

    printf ("A area da pizza e: %.2f", area);
}
