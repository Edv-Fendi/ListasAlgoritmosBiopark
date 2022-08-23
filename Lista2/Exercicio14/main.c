#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, result;
    int ano;

    printf ("Digite o valor do carro: \n");
    scanf("%f", &valor);
    printf ("Digite o ano do carro: ");
    scanf ("&d", &ano);

    if ((ano >= 1990)){
        result = valor * 0.015;
        printf ("O valor da transferencia vai ser: \n %.2f ", result);
    } else if ((ano < 1990)){
        result = valor * 0.01;
        printf ("O valor da transferencia vai ser: \n %.2f ", result);
        }


}
