#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salariominimo, salarioatual, mediasalarial;

    printf("Digite o valor do seu salario atual: ");
    scanf("%f", &salarioatual);

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salariominimo);

    mediasalarial = salarioatual / salariominimo;
    printf("Voce recebe %.2f salarios minimos:", mediasalarial);
}
