#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetorA[10],  numerosmenor15 = 0, numero15 = 0, i, n15=0;
    float media = 0, numerosmaiores15;



    for (i = 1; i<=10; i++){
            printf("Insira o %d elemento do vetor 1: \n", (i));
            scanf("%d", &vetorA[i]);

        if (vetorA[i] == 15){
            numero15 = numero15 + 1;

        }
        if (vetorA[i] > 15){
            n15 = n15 +1;
            numerosmaiores15 = numerosmaiores15 + vetorA[i];


        }
        if (vetorA[i] < 15){
            numerosmenor15 = numerosmenor15 + vetorA[i];
        }

    }


      media = numerosmaiores15 / n15;
    printf ("O resultado de numeros 15 e: %d \nO resultado da soma entre numeros menores que 15 eh: %d \nA media entre os numeros maiores que 15 sao: %.2f", numero15, numerosmenor15, media );
}
