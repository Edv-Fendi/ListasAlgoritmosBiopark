#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char formato[2];
    float numero,celsius,fahrenheit ;

    printf ("Digite F para Fahrenheit e C para celsius\n");
    scanf ("%s", formato);

    if (strcmp(formato, "f") == 0)
    {
        printf ("Digite o a temperatura em Fahrenheit: ");
        scanf ("%f", &numero);
        celsius = (numero - 32) / 1.8;


        printf ("O resultado em celsius e: %.2f", celsius);
    }
    if (strcmp(formato, "c") == 0)
    {
        printf ("Digite o a temperatura em Celsius: ");
        scanf ("%f", &numero);
        fahrenheit = (numero  * 1.8) + 32;


        printf ("O resultado em Fahrenfodase e: %.2f", fahrenheit);


    }

}
