#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, pesomaior, pesomenor, resultado;

    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    pesomaior = peso * 1.15;

    pesomenor = peso * 0.80;
    printf ("Seu peso maior vai ser %.1fkg\n", pesomaior);
    printf ("Seu peso menor vai ser %.1fkg \n", pesomenor);

}
