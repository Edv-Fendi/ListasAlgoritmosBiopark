#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alunos;
    float nota1, nota2, media;

    printf ("\Digite a quantidade de alunos:\n");
    scanf ("%d", &alunos);

    for (int i = 0; i < alunos; i++)
    {
        printf ("\nDigite as notas do aluno%d: \n", i);
        scanf ("%f %f", &nota1, &nota2);
        media = (nota1 + nota2) / 2;

        if(media >= 60)
        {
            printf ("\nVoce foi aprovado\n");

        }
        else
        {
            printf ("\nVoce foi reprovado\n");
        }


    }





}
