#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetorA[8], vetorB[8], i;



    for (i = 0; i<8; i++)
    {
        printf("Insira o %d elemento do vetor 1: \n", (i+1));
        scanf("%d", &vetorA[i]);
    }
    for (i = 0; i<8; i++)
    {
         vetorB[i] = vetorA[i] * 2;
        printf("\n\n\nResultado da posicao %d: %d", i+1, vetorB[i]);
    }



}
