#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horasnormais, horasextras, salarionormais, salarioextras, salariototal, impostofinal;


    printf("Digite o numero de horas normais trabalhadas: ");
    scanf ("%f", &horasnormais);

    printf("Digite o numero de horas extras trabalhadas: ");
    scanf ("%f", &horasextras);

    salarionormais = horasnormais * 10;
    salarioextras = horasextras * 15;

    salariototal = salarionormais + salarioextras;
    impostofinal = salariototal * 0.90;

    printf("Voce vai receber %.2f: ", impostofinal);



}
