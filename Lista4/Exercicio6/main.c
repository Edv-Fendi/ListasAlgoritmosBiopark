#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetorA[10],  idademenor = 999999, idademaior = 0, i;


    for (i = 1; i<=10; i++)
    {
        printf("Insira a idade %d: \n", (i));
        scanf("%d", &vetorA[i]);

        if (vetorA[i] >= idademaior)
        {
            idademaior = vetorA[i];

        }
        if (vetorA[i] <= idademenor){
            idademenor = vetorA[i];
        }

    }

    printf ("A idade maior eh: %d \nA idade menor eh: %d", idademaior, idademenor);
}
