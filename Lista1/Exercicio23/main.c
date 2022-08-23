#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sombrapredio, sombraindividuo, altura, divisaoaltura, multiplicacaoaltura, resultadofinal;

    printf ("Digito o tamanho da sombra do predio: ");
    scanf ("%f", &sombrapredio);

    printf ("Digito o tamanho da sua sombra: ");
    scanf ("%f", &sombraindividuo);

    printf ("Digite o seu tamanho em metros: ");
    scanf ("%f",&altura);

    divisaoaltura = sombrapredio / sombraindividuo;

    resultadofinal = divisaoaltura * altura;

    printf("A altura do predio e: \n%.2f", resultadofinal);



}
