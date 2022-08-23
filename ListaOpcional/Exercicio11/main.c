#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;

    printf ("Digite o ano:\n");
    scanf ("%d", &ano);

    if (ano % 400 == 0){
        printf ("O numero e bissexto");
    }else if ((ano % 100 != 0) && (ano % 4 == 0)){
        printf ("O numero e bissexto");
    }else {
        printf ("O numero nao e bissexto");
    }
}
