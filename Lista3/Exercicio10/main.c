#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int number, number2;




    for (int i = 1; i <= 20; i++)
    {
        printf ("Digite um numero:\n");
        scanf ("%d", &number);
        if (number % 2 == 0)
        {
        number2 = number2 + 1;
        }


    }
    printf("\nA quantidade de pares so: %d", number2);


}
