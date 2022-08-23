#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nivel;
    float horasAulas, salario;

    printf ("Digite qual seu nivel de professor: \n");
    scanf ("%s", &nivel);


    if ((nivel == '1')){
        printf ("Digite quantas horas voce trabalhou: \n");
        scanf ("%f", &horasAulas);
        salario = 12.00 * horasAulas * 4.5;
        printf ("O seu salario vai ser de: %.2f", salario);
    } else if ((nivel == '2')){
        printf ("Digite quantas horas voce trabalhou: \n");
        scanf ("%f", &horasAulas);
        salario = 17.00 * horasAulas * 4.5;
        printf ("O seu salario vai ser de: %.2f", salario);
    } else if ((nivel == '3')){
        printf ("Digite quantas horas voce trabalhou: \n");
        scanf ("%f", &horasAulas);
        salario = 25.00 * horasAulas * 4.5;
        printf ("O seu salario vai ser de: %.2f", salario);
    } else {
        printf ("Verifique o numero do seu nivel de professor");
    }
}
