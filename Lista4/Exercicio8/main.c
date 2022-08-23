#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetLoto[10], vetResult[5], acumuladora = 0, i;


    for (int i = 0; i < 5; i++){
        printf ("Digite o gabarito %d da loto: \n", i+1);
        scanf ("%d", &vetResult[i]);
    }
     for (int i = 0; i < 10; i++){
        printf ("Digite o %d/ que voce apostou na loto: \n", i+1);
        scanf ("%d", &vetLoto[i]);

     for (int x = 0; x < 5; x++){

            if ((vetResult[x] == vetLoto[i]))

            {
                acumuladora++;
            }

        }
     }
            if (acumuladora == 5){
                printf("Voce acertou 5 numeros, voce ganhou o premio maximo!!! PARABENS");

            }else{
                printf ("Voce acertou %d numeros, de um total de 5, tente novamente.", acumuladora);
            }

   // for (int i = 0; i < 5; i++){
         //   printf ("Os numeros sao: %d,", vetLoto[i]);
}

