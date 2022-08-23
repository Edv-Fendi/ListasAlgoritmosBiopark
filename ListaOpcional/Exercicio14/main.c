#include <stdio.h>

#include <math.h>

int main(void)

{

    float x, y;

    printf("Coloque o valor de x:");
    scanf("%f",&x);

    printf("Coloque o valor de y:");
    scanf("%f",&y);

    if ((x > 0) & (y > 0)){

    printf("Primeiro quadrante");

    }

    else if((x < 0) & (y > 0)){

    printf("Segundo quadrante");

    }

    else if((x < 0) & (y < 0)){

    printf("Terceiro quadrante");

    }else if((x > 0) & (y < 0))

    {

    printf("Quarto quadrante");

    }
    if ((x = 0) && (y = 0))

   {

    printf("Estará localizado no centro do plano cartesiano");

   }
    while ((x != 0) && (y != 0));

    return (0);

}
