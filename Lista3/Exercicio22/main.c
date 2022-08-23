#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distancia = 0, distanciaFinal;

    do{

        printf ("Digite quantos km voce andou: \n");
        scanf ("%f", &distancia);
    if (distancia <= 4000){
        distanciaFinal = distanciaFinal + distancia;
    }

    }while (distanciaFinal >= 4000);
    printf ("Voce chegou ao seu destino");
}
