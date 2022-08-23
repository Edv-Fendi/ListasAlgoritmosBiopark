#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldo, credito;

    printf ("Digite o seu saldo medio anual: \n");
    scanf ("%f", &saldo);



    if (( saldo <= 200) && (saldo >= 0)){
        printf ("Voce nao tem direito a credito");
    } else if ((saldo <= 400) && (saldo >= 201)){
        credito = saldo * 0.20;
        printf ("Voce tem direito a: %.2f", credito);
    } else if ((saldo <= 600) && (saldo >= 401)){
        credito = saldo * 0.30;
        printf ("Voce tem direito a: %.2f", credito);
    }else if ((saldo > 600)){
        credito = saldo * 0.40;
        printf ("Voce tem direito a: %.2f", credito);
    }
}
