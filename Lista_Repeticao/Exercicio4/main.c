#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numb1;

    printf ("Enter the number");
    scanf ("%d", &numb1);

    for (int i=2; i <= numb1; i++){
            if (numb1%i==0){
                printf ("%d\n", i);
            }

    }
}
