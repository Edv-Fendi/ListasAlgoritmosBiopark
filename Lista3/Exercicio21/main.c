#include <stdio.h>
#include <stdlib.h>

int main()
{

    int mesafumante = 25, mesa, mesanormal = 25;

    do{
        printf ("Voce quer mesa para fumantes (1) ou para nao fumantes (2): \n");
        scanf ("%d", &mesa);


        if (mesa == 1)
        {
            if (mesafumante > 0){
                mesafumante--;
        }else  {
            printf ("Ja acabou as mesas :D, tente outra forma\n\n\n\n");

        }

        }
        if (mesa == 2)
        {
            if (mesanormal > 0){
                mesanormal--;
        }else  {
            printf ("Ja acabou as mesas :D, tente outra forma\n\n\n\n");

        }

        }

        printf ("\nMesas para fumantes disponiveis: %d \nMesas para nao fumantes disponiveis: %d\n\n", mesafumante, mesanormal);
    }while((mesafumante !=0) || (mesanormal != 0));


}



