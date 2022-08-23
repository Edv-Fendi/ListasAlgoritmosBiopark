#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, resultado;


    for (int i = 1; i <= 10; i++){
        printf ("Type a number: \n");
        scanf ("%d", &number);
        resultado = resultado + number;

    }
    printf ("Result is: %d\n", resultado);
}
