#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorD[10];

    for (int i = 0; i < 10; i++){
        printf ("Digite o %dnumeros: ", i+1);
        scanf("%d", &vetorD[i]);

    }

    for (int i = 0; i < 10; i++){
        if(vetorD[i] >= 0){
            printf ("Os numeros sao: %d\n", vetorD[i]);
        }
    }

}
