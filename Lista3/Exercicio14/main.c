#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nao[3];

    printf ("Ola, tudo bem\n");
    printf ("Digite 'nao' para continuar ou 'sim' para sair \n");
    scanf ("%s", nao);

    while (strcmp(nao, "sim") != 0){
        printf ("Ola, tudo bem\n");
        printf ("Digite 'nao' para continuar ou 'sim' para sair: \n");
        scanf ("%s", nao);

    }

    printf("Processo finalizado");

}
