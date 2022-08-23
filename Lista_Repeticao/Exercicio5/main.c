#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, soma = 0;

    printf ("Enter the first number:");
    scanf ("%d", &n);
    for  (i=1; i <= n; i++) {
    soma = soma + i;

    printf("The numbers is: %d\n", soma);


    }




}

