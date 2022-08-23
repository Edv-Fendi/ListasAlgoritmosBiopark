#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, resultado;


    for (int i = 1; i <= 20; i++){
        printf ("Type your age: \n");
        scanf ("%d", &number);

        if(number >= 18){

        resultado = resultado + 1;
        }
    }
    printf ("\n\n\n\nResult is: %d\n", resultado);
}
