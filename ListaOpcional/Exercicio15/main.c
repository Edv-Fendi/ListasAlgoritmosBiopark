#include <stdio.h>
#include <stdlib.h>
#include <string.h>


 /*Uma pessoa pode se aposentar pelo INSS caso esteja em alguma das situações abaixo:
• É do sexo masculino, possui pelo menos 65 anos, e pelo menos 10 anos de contribuição.
• É do sexo masculino, possui pelo menos 63 anos, e pelo menos 15 anos de contribuição.
• É do sexo feminino, possui pelo menos 63 anos, e pelo menos 10 anos de contribuição.
• É do sexo feminino, possui pelo menos 61 anos, e pelo menos 15 anos de contribuição.
Crie um programa para ler um caracter ’M’ ou ’F’ que representa o sexo de um indivíduo,
ler a sua idade, e seu tempo de contribuição. O programa deverá então imprimir “Aposentável” caso o indivíduo se enquadrar em uma das situações acima. Caso contrário o
programa deverá imprimir “Não Aposentável”*/
int main()
{

    char sexo;
    int idade, contribuicao;

    printf ("Digite seu sexo, M ou F: \n");
    scanf ("%s", &sexo);

    if ((sexo == 'F') == 0){
            printf ("Digite sua idade: \n");
            scanf ("%d", &idade);

            printf ("Quantos anos de contribuicao voce tem?");
            scanf ("%d", &contribuicao);
        if ((idade >= 63) && (contribuicao >= 10)){
            printf ("Pode se aposentar");
        } else if ((idade >= 61 ) && (contribuicao >= 15)){
            printf ("Pode se aposentar");
        }else{
            printf ("Voce nao pode se aposentar ainda");
        }
    }
    if ((sexo == 'M') == 0){
        printf ("Digite sua idade: \n");
        scanf ("%d", &idade);

        printf ("Quantos anos de contribuicao voce tem?");
        scanf ("%d", &contribuicao);

        if ((idade >= 65) && (contribuicao >= 10)){
            printf ("Pode se aposentar");
        } else if ((idade >= 63 ) && (contribuicao >= 15)){
            printf ("Pode se aposentar");
        }else{
            printf ("Voce nao pode se aposentar ainda");
        }
    }
}
