#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contaCA;
    float contaF, conta, mediaconta, totalconta;

    printf ("Digite o valor da conta: ");
    scanf ("%f", &conta);

    contaCA = conta / 3;
    contaF =  conta - contaCA * 2 ;

    printf ("Carlos e Andre vao pagar %d, enquanto Felipe vai pagar %.2f reais", contaCA, contaF);
}
