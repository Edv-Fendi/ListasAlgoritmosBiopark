#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, resultado;
    int numero;

    printf("101: Gerente \n");
    printf("102: Engenheiro \n");
    printf("103: Tecnico \n");
    printf("Para qualquer outro cargo, digite outro digito.\n");
    printf("Digite o codigo do seu cargo: \n");
    scanf ("%d", &numero);

    printf ("Digite o seu salario: \n");
    scanf("%f", &salario);

    if ((numero == 101)){
        resultado = (salario * 0.10) + salario;
        printf ("O seu novo salario vai ser de: %.2f", resultado);
    } else if ((numero == 102)){
        resultado = (salario * 0.20) + salario;
        printf ("O seu novo salario vai ser de: %.2f", resultado);

    } else if ((numero == 103)){
        resultado = (salario * 0.30) + salario;
        printf ("O seu novo salario vai ser de: %.2f", resultado);

    } else {
        resultado = (salario * 0.40) + salario;
        printf("Seu novo salario e de: %.2f", resultado);
    }

}
