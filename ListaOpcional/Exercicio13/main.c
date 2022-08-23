#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano, mes, dia, ano2, mes2, dia2;

    printf ("Digite o dia: ");
    scanf ("%d", &dia);
    printf ("Digite o mes: ");
    scanf ("%d", &mes);
    printf ("Digite o ano: ");
    scanf ("%d", &ano);


    printf ("Digite o dia2: ");
    scanf ("%d", &dia2);
    printf ("Digite o mes2: ");
    scanf ("%d", &mes2);
    printf ("Digite o ano2: ");
    scanf ("%d", &ano2);


    if (ano > ano2){
        printf ("%d %d %d", dia, mes, ano);
    }else if (ano < ano2){
        printf ("%d %d %d", dia2, mes2, ano2);
    }

    if ((ano == ano2) && (mes > mes2)){
        printf ("%d %d %d", dia, mes, ano);

    }else if ((ano == ano2) && (mes < mes2)){
        printf ("%d %d %d", dia2, mes2, ano2);
    }
    if ((ano == ano2) && (mes == mes2) && (dia > dia2)){
        printf ("%d %d %d", dia, mes, ano);
    }else if ((ano == ano2) && (mes == mes2) && (dia < dia2)){
        printf ("%d %d %d", dia2, mes2, ano2);
    }







}
