#include <stdio.h>
#include <stdlib.h>

int main()
{
    float novelos, blusas, gasto;

    printf("Digite quantos novelos foram gastos: \n");
    scanf ("%f", &novelos);
    printf("Digite quantas blusas foram feitas: \n");
    scanf ("%f", &blusas);

    gasto = novelos / blusas;

    printf("Precisa de %.2f novelos, para fazer uma blusa", gasto);





}
