#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float raio, altura, volume;

    printf ("Digite o raio do cilindro:");
    scanf ("%f", &raio);

    printf ("Digite a altura:");
    scanf ("%f", &altura);

    volume = 3.14 * (raio*raio) * altura;

    printf ("O volume e de: %.2f cm", volume);

}
