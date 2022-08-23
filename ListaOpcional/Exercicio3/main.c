#include <stdio.h>
#include <stdlib.h>
#include <math.h>>

int main()
{
    float number, f;

    printf ("Enter the number: \n");
    scanf ("%f", &number);

    f = (sqrt (number)) + (number/2) + (pow (number, number));

    printf ("Valor e: %.2f", f);


}
