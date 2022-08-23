#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[30], name2[30];
    int age=400000, age2;




    for (int i = 1; i <= 3; i++)
    {
        printf ("Digite seu nome: \nDigite sua idade: \n");
        scanf ("%s %d", name2, &age2);
        if (age2 < age)
        {
            age = age2;
            strcpy(name, name2);
        }


    }
    printf("\n\nNome: %s\nage: %d", name, age);


}
