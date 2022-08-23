#include <stdio.h>
#include <stdlib.h>

int main()
{

    char mensagem[256];
    int i;

    printf("Digite sua mensagem: \n");
    scanf ("%s", &mensagem);
    for (i=1; i<=20; i++){
        printf ("%d - %s\n", i, mensagem);
        }
}

