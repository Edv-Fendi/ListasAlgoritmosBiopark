#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int number, number2 = 0;




    for (int i = 1; i <= 20; i++)
    {
        printf ("Enter the number:\n");
        scanf ("%d", &number);
        if (number < 100 && number > 0)
        {
            number2 = number2 + 1;

        }


    }
    printf("\n\nNumero: %d", number2);


}
