#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1, num2, resultado = 0;
    printf ("Digite o primeiro numero: \n");
    scanf ("%d", &num1);
    printf ("Digite o segundo numero: \n");
    scanf ("%d", &num2);



    if (num1 > num2)
    {
        for ( int i = num2; i <= num1; i++)

        {
            resultado = resultado + i;


        }
        printf ("Resultado: %d", resultado);
    }
    else if (num2 > num1)
    {
        for ( int i = num1; i <= num2; i++)
        {
            resultado = resultado + i;


        }
        printf ("Resultado: %d", resultado);

    }

}


