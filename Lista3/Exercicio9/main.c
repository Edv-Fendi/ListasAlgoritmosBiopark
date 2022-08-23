#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int number1, number;




    for (int i = 1; i <= 20; i++)
    {
        printf ("Enter the number:\n");
        scanf ("%d", &number1);
        if (number1 < 18)
        {
            number = number + 1;
        }


    }
    printf("Total de: %d", number);


}
