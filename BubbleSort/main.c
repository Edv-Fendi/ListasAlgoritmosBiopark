#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Vet[5] = {7, 10, 5, 3, 12}, aux;

    for (int x = 0; x < 5; x++)
    {
        for (int i = 0; i < 4; i++)
        {
            if (Vet[i] > Vet[i + 1])
            {
                aux = Vet[i];
                Vet[i] = Vet[i + 1];
                Vet[i + 1] = aux;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", Vet[i]);
    }



}
