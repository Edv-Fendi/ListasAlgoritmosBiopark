#include <stdio.h>
#include <stdlib.h>

int main()
{
    float quilo = 23.59, peso, bebida, acumulatve;


    do
    {
        printf ("Digite o peso do prato: \n");
        scanf ("%f", &peso);
        printf ("Digite o valor gasto com bebida: \n");
        scanf ("%f", &bebida);

        if(peso >= 0 && bebida)
        {
            acumulatve  = acumulatve + bebida + (peso * 23.59);

        }
        }while(peso > 0);
        printf ("O resultado e: \n%.2f", acumulatve);

    }

