#include <stdio.h>
#include <stdlib.h>

void lerNumeros (int numero[]);
void tabuada (int numero[]);

int main()
{
    int numero[4];

    lerNumeros (numero);
    tabuada (numero);
}

void lerNumeros (int numero[]){

    for (int i = 0; i < 2; i++){
        printf ("Digite um numero: ");
        scanf ("%d", &numero[i]);
    }
}

void tabuada (int numero[]){
    int result;
    for (int i = 1; i <= numero[1]; i++ ){
        result = numero[0] * i;
        printf ("%d X %d = %d \n", numero[0], i, result);

    }

}
