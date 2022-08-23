#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado1, lado2, lado3;


        printf ("Digite o primeiro lado: \n");
        scanf ("%d", &lado1);

        printf ("Digite o segundo lado: \n");
        scanf ("%d", &lado2);

        printf ("Digite o terceiro lado: \n");
        scanf ("%d", &lado3);

        if ((lado1 == lado2) && (lado2 == lado3)){
            printf ("Triangulo Equilatero");
        }
        else if ((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3)){
                printf ("Triangulo isosceles");

        }else if ((lado1 != lado2) || (lado1 != lado3) || (lado2 != lado3)){
            printf ("Triangulo escaleno");
        }

}
