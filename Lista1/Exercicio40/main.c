#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float catetoa, catetob, hipotenusa;

    printf("Digite o primeiro cateto: ");
    scanf ("%f", &catetoa);

    printf("Digite o segundo cateto: ");
    scanf ("%f", &catetob);

    hipotenusa = (catetoa * catetoa) + (catetob * catetob);

    printf ("A hipotenusa e: %.2f", hipotenusa);



}
