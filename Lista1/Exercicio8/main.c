#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notaum, notadois, notatres, media;

    printf("Digite a primeira nota: \n");
    scanf ("%f", &notaum);

    printf("Digite a segunda nota: \n");
    scanf ("%f", &notadois);

    printf ("Digite a terceira nota: \n");
    scanf ("%f", &notatres);

    media = notaum + (notadois * 2) + (notatres * 3) /3;

    printf ("Sua media final e: %.2f", media);

}
