#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float ladoA, ladoB, ladoC, s, area;

    printf ("Digite o primeiro lado: \n");
    scanf ("%f", &ladoA);

    printf ("Digite o segundo lado: \n");
    scanf ("%f", &ladoB);

    printf ("Digite o terceiro lado: \n");
    scanf ("%f", &ladoC);

    s = (ladoA +ladoB + ladoC) / 2;

    area = sqrt(s * (s - ladoA) * (s - ladoB) * (s - ladoC));

    printf ("Area: %.2f", area);


}
