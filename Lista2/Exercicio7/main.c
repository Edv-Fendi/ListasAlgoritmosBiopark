#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, resultado;
    char sexo;


    printf ("Digite sua altura: \n");
    scanf ("%f", &altura);

    printf ("Digite seu sexo, M ou F: \n");
    scanf ("%s", sexo);

    if ((sexo == 'M')){
        resultado = (72.7 * altura) - 58.0;
        printf ("O resultado e: \n%.2f", resultado);
    } else if ((sexo == 'F')){
        resultado = (62.1 * altura) - 44.7;
        printf ("O resultado e: \n%.2f", resultado);
   }
}
