#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: \n");
    scanf ("%f", &celsius);

    fahrenheit = celsius * 1.8 + 32;

    printf("A temperatura em Fahrenheit e: %.2f", fahrenheit);
}
