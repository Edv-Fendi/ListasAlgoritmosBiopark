#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio, area, perimetro;

    printf ("Digite a area do raio:");
    scanf ("%f", &raio);



    area = 3.14 * pow(raio, 2);

    perimetro = 2 * 3.14 * raio;
    printf ("Area %.2f, Perimetro: %.2f", area, perimetro);
}
