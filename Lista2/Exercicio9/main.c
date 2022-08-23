#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matricula;
    float nota1, nota2, nota3, media;

    printf ("Digite sua matricula: \n");
    scanf ("%d", &matricula);

    printf ("Digite a primeira nota: \n");
    scanf ("%f", &nota1);
    printf ("Digite a segunda nota: \n");
    scanf ("%f", &nota2);
    printf ("Digite a terceira nota: \n");
    scanf ("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if ((media >= 70.0)) {
        printf ("O aluno com a matricula: %d, foi aprovado com media %.2f", matricula, media);
    } else {
        printf("O aluno com a matricula: %d, foi reprovado, com media %.2f", matricula, media);
        }
}
