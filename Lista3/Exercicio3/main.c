#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[100];
    int i = 0;

    printf ("Enter a nome: \n");
    scanf ("%s", &name);



    for (i = 1; i <=10; i++){
        printf ("%s\n", name);
    }

}


