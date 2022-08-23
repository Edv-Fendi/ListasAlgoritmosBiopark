#include <stdio.h>
#include <stdlib.h>

int main()
{
        float suco, agua, litros;

        printf("Quantos litros de refresco voce vai fazer: \n");
        scanf("%f", &litros);

        suco = litros * 2;
        agua = litros * 8;

        printf ("Sao necessarios %.2f partes de agua, e %.2f partes de suco para fazer seu refresco", agua, suco);
}
