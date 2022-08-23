#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float  altura, h1 = 0, h2 = 2000000;


    for (int i = 1; i <= 15; i++){
        printf ("Digite sua altura: \n");
        scanf ("%f", &altura);


        if (altura > h1){
            h1 = altura;
        }
        if (altura < h2){
            h2 = altura;
        }
    }
    printf ("A maior altura e: %.2f\nA menor altura e: %.2f", h1, h2);
}
