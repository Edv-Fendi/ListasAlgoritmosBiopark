#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, acumulative = 1;


    printf ("Enter the number:\n");
    scanf ("%d", &number1);

    for (int i = 1; i <= number1; i++){
            acumulative = acumulative * i;


    }
    printf ("Este e o fatorial: %d", acumulative);
}
