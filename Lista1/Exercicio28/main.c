#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notaum, notaumsomada, notadoissomada, notadois, notatotal, media;

     printf("Digite a primeira nota: \n");
     scanf ("%f", &notaum);

     notaumsomada = notaum * 2;

     printf("Digite a segunda nota: \n");
     scanf ("%f", &notadois);

     notadoissomada = notadois * 3;

     notatotal = notaumsomada + notadoissomada;

     media = notatotal / 2;

     printf ("Sua media e de: %.2f", media);


}
