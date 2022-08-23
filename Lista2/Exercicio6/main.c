#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroa, numerob, numeroc;
    printf("A seguir digite tres numeros diferentes.\n");
    printf("Digite numero \n");
    scanf ("%d", &numeroa);
    printf("Digite o numero \n");
    scanf ("%d", &numerob);
    printf("Digite o numero \n");
    scanf ("%d", &numeroc);

    if((numeroa > numerob) && (numeroa > numeroc) && (numeroc > numerob)){
        printf("%d %d %d",numeroa, numeroc, numerob );
    }

    if ((numeroa > numerob) && (numeroa > numeroc) && (numerob > numeroc)){
        printf("%d %d %d",numeroa, numerob, numeroc );
    }

    if((numerob > numeroa) && (numerob > numeroc) && (numeroa > numeroc)){
        printf("%d %d %d",numerob, numeroa, numeroc );
    }
    if((numerob > numeroc) && (numerob > numeroa) && (numeroc > numeroa)){
        printf("%d %d %d",numerob, numeroc, numeroa );
    }
    if((numeroc > numerob) && (numeroc > numeroa) && (numerob > numeroa)){
        printf("%d %d %d",numeroc, numerob, numeroa);
    }
    if((numeroc > numeroa) && (numeroc > numerob) && (numeroa > numerob)){
        printf("%d %d %d",numeroc, numeroa, numerob );
    }

    }











