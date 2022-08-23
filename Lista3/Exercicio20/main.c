#include <stdio.h>
#include <string.h>

int main()
{
    char animaischar[15];
    int animais = 0, totalgato = 0, totalcachorro = 0;

    printf ("Digite quantos animais possuem na loja\n");
    scanf ("%d", &animais);

    for (int i = 1; i <= animais; i++)
    {
        printf ("Digite o %d animal, cat or dog\n", i);
        fflush(stdin);
        scanf ("%s", animaischar);

        if (strcmp(animaischar, "cat") == 0)
        {
            totalgato++;
        }
        else if (strcmp(animaischar, "dog") == 0)
        {
            totalcachorro++;
        }
    }

    printf("O numero de gatos e: %d \nO numero de cachorros e: %d", totalgato, totalcachorro);
}
