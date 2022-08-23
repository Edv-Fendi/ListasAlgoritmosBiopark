#include <stdio.h>
#include <stdlib.h>
void morse(int aux);

int main()
{

    int num, centena, dezena, unidade, aux;
    printf ("Codigo Morse: \n");

    printf("Digite um numero: \n");
    scanf ("%d", &num);


    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            centena = num / 100;
            aux = centena;
            morse(aux);
        }

        if (i == 1)
        {
            dezena = (num - (100 * centena)) / 10;
            aux = dezena;
            morse(aux);
        }

        if (i == 2)
        {
            unidade = (num - (100 * centena)) - dezena * 10;
            aux = unidade;
            morse(aux);
        }



    }
}

void morse (int aux)
{
    switch (aux)
    {
    case 1:
        printf (" . _ _ _ _ ");
        break;

    case 2:
        printf (" . . _ _ _ ");
        break;

    case 3:
        printf (" . . . _ _ ");
        break;

    case 4:
        printf (" . . . . _ ");
        break;

    case 5:
        printf (" . . . . . ");
        break;

    case 6:
        printf (" _ . . . . ");
        break;

    case 7:
        printf (" _ _ . . . ");
        break;

    case 8:
        printf (" _ _ _ . . ");
        break;

    case 9:
        printf (" _ _ _ _ . ");
        break;

    case 0:
        printf (" _ _ _ _ _ ");
        break;

    }
}





