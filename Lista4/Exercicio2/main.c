#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetorA[5], numerosPares = 0, numerosImpares = 0, numeromaior = 0, menorque7 =0 , i = 0;



    for (i = 0; i<5; i++){
            printf("Insira o %d elemento do vetor 1: \n", (i+1));
            scanf("%d", &vetorA[i]);
        if (vetorA[i] % 2 == 0){
            numerosPares = numerosPares + 1;

        }
        if (vetorA[i] % 2 != 0){
            numerosImpares = numerosImpares + 1;

        }
        if (vetorA[i] >= 50){
            numeromaior = numeromaior + 1;
        }
        if (vetorA[i] <= 7){
            menorque7 = menorque7 + 1;
        }


    }
    printf ("O total de pares sao: %d \nO total de impares sao: %d \nO total de numeros maiores que 50 sao: %d \n o Total de numeros menores que 7 sao: %d", numerosPares, numerosImpares, numeromaior, menorque7);
}
