#include <stdio.h>
#include <stdlib.h>

int main()
{
    float queijo, presunto, hamburguer, sanduichetotal;
    int sanduiche;

    printf ("Digite quantas sanduiches voce quer fazer: ");
    scanf ("%d", &sanduiche);

    queijo = (100.0 * sanduiche) / 1000;
    presunto = (50.0 * sanduiche)  / 1000;
    hamburguer =  (100.0 * sanduiche) / 1000 ;



    printf ("Vai gastar %.3fkg de queijo, %.3fkg de presunto e %.3fkg de hamburguer", queijo, presunto, hamburguer);
}
