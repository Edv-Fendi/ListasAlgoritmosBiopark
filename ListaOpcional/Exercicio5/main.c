#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, altura, area;

    printf ("Calculador de area de triagulo \n \n \n");

    printf ("Digite o tamanho da base: \n");
    scanf ("%f", &base);
    printf ("Digite a altura: \n");
    scanf ("%f", &altura);

    area = base * altura / 2;

    printf ("A area do triangulo e: %.2f", area);



}
