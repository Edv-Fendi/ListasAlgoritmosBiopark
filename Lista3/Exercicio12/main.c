#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int number, number2 = 0, number3 = 0, number4 = 0;




    for (int i = 1; i <= 20; i++)
    {
        printf ("Enter the number:\n");
        scanf ("%d", &number);

        if (number <= 100 && number >= 0){
            number2 = number2 + 1;
        }
        else if (number <= 200 && number > 100){
            number3 = number3 + 1;
        }
        else if (number > 200){
            number4 = number4 + 1;
        }


    }
    printf("\nTem %d entre 0 e 100\nTem %d entre 101 e 200\nTem %d maiores de 200", number2, number3, number4);

}


