#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    int dias;
    char nome[30];

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite sua idade:\n");
    scanf ("%d", &idade);

    dias = idade * 365;

    printf ("Ola %s, voce tem %d, que totalizam %d dias", nome, idade, dias);


}
