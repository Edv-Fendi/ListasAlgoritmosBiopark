#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nascimento, anos, semanas, meses, dias, anonascimento, anoatual;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoatual);

    anos = anoatual - nascimento;
    meses = anos * 12;
    semanas = anos * 52;
    dias = anos * 365;

    printf ("Voce tem %d anos", anos);
    printf ("\nVoce tem %d meses", meses);
    printf ("\nVoce tem %d semanas", semanas);
    printf ("\nVoce tem %d dias", dias);





}
