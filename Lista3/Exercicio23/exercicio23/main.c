#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Ncasas, canal, canal3 = 0, canal5 = 0, canal8 = 0, canal11 = 0, canal13 = 0, pessoas =0;
    float totalpessoas;

    printf ("Digite o numero de casas");
    scanf("%d", &Ncasas);
    do{
            Ncasas--;
            printf ("Digite qual canal estava assintindo: \n ");
            scanf ("%d", &canal);
            printf ("Digite quantas pessoas estavam assistindo:  \n");
            scanf ("%d", &pessoas);

            if (canal == 3){
                    canal3 = canal3 + pessoas;

            }
            if (canal == 5){
                    canal5 = canal5 + pessoas;

            }
            if (canal == 8){
                    canal8 = canal8 + pessoas;

            }
             if (canal == 11){
                    canal11 = canal11 + pessoas;

            }
             if (canal == 13){
                    canal13 = canal13 + pessoas;

            }

            totalpessoas = totalpessoas + pessoas;








    }while (Ncasas != 0);

    printf ("Canal3: %.2f%% \nCanal5: %.2f%% \nCanal8: %.2f%% \nCanal11: %.2f%% \nCanal13: %.2f%%",
            (canal3 / totalpessoas * 100), (canal5 / totalpessoas * 100), (canal8 / totalpessoas * 100),  (canal11 / totalpessoas * 100), (canal13/ totalpessoas * 100));
}
