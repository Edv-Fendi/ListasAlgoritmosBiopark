#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetorA[10], vetorB[10], vetorC[10], i;



    for (i = 0; i<10; i++)
    {
        printf("Insira o %d elemento do vetor 1: \n", (i+1));
        scanf("%d", &vetorA[i]);
    }
    for (i = 0; i<10; i++)
    {
        printf("Insira o %do elemento do vetor 2: \n", (i+1));
        scanf("%d", &vetorB[i]);
    }
    for (i = 0; i<10; i++)
    {
        vetorC[i] = vetorA[i] + vetorB[i];
        printf("\n\n\nResultado da posicao %d: %d", i+1, vetorC[i]);
    }

}
