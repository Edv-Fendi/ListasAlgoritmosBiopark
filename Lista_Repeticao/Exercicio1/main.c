#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prato = 0;
    int saida;


    printf ("Digite o numero do prato: \n");
    scanf ("%d", &prato);


    printf ("-- Menu --\n");
    printf ("1- Tsebhi com Injera\n");
    printf ("2- Hilbet\n");
    printf ("3- Kitcha fit-fit\n");
    printf ("4- Hamli\n");
    printf ("5- Sair\n");


    while (prato < 5){
    printf ("Digite a opcao desejada: \n");
    scanf("%d", &prato);

    switch (prato) {
    case (1):
    printf ("1- Tsebhi com Injera\n");
    break;
    case (2):
    printf ("2- Hilbet\n");
    break;
    case (3):
    printf ("3- Kitcha fit-fit\n");
    break;
    case (4):
    printf ("4- Hamli\n");
    break;
    case (5):
    printf ("5- Sair\n");
    break;
    }
    }
}

