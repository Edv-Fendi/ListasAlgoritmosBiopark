#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number, i ;
    char name [100];

     printf ("Enter a nome: \n");
     scanf ("%s", &name);
     printf ("Enter the number of times: \n");
     scanf ("%d", &number);

     for (i = 1; i <= number; i++){
        printf ("\nThe result is: %s", name);
     }
}
