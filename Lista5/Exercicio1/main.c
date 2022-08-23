#include <stdio.h>
#include <stdlib.h>
void lerNumeros (int numero[]);
int Nummaior (int numero[]);
int NumMenor (int numero[]);

int main()
{

    int numero[4], nuMa, Nume;

    lerNumeros (numero);
    nuMa = Nummaior (numero);
    Nume = NumMenor (numero);

    printf ("Numero Maior: %d \n", nuMa);
    printf ("Numero Menor: %d", Nume);
}


void lerNumeros (int numero[]){

    for (int i = 0; i < 3; i++){
        printf ("Digite um numero: ");
        scanf ("%d", &numero[i]);
    }
}
int Nummaior (int numero[]){
    int numeroMaior = numero[0];
    for (int i = 0; i < 3; i++){
        if ((numero[i] > numeroMaior) && (i > 0)){
            numeroMaior = numero[i];

        }
    }

    return numeroMaior;
}


int NumMenor (int numero[]){
    int numeroMenor = numero[0];
    for (int i = 0; i < 3; i++){
        if ((numero[i] < numeroMenor) && (i > 0)){
            numeroMenor = numero[i];

        }
    }

    return numeroMenor;
}
