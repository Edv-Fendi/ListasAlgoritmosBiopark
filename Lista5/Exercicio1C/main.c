#include <stdio.h>
#include <stdlib.h>
void lerNumeros (int numero[]);
void divisiveis (int numero[]);

int main()
{
    int numero[3];

    lerNumeros (numero);
    divisiveis (numero);
}

void lerNumeros (int numero[]){

    for (int i = 0; i < 2; i++){
        printf ("Digite um numero: ");
        scanf ("%d", &numero[i]);
    }
}

void divisiveis (int numero[]){

    for (int i = 0; i <= 200; i++){
    if ((i % numero[0] == 0) && (i % numero[1] != 0)){
        printf ("Numero: %d\n", i);

        }
    }
}
