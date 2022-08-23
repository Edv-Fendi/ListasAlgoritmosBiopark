#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetorR[5], vetorS[10], vetorX[10], i, x;


    for (i = 0; i < 10; i++){
        vetorX[i] =0;
    }
    for (i = 0; i < 5; i++)
    {
        printf("Insira o %d elemento do vetor R: \n", (i+1));
        scanf("%d", &vetorR[i]);
    }
    for (i = 0; i<10; i++)
    {
        printf("Insira o %d elemento do vetor S: \n", (i+1));
        scanf("%d", &vetorS[i]);

        for (x = 0; x < 5; x++)
        {

            if ((vetorR[x] == vetorS[i]))

            {
                vetorX[i] = vetorR[x];
            }
        }
    }

    for (i=0; i < 10; i++ ){
            if(vetorX[i] !=0){
                printf("Os numeros em comum sao: %d\n", vetorX[i]);
            }


    }





}
