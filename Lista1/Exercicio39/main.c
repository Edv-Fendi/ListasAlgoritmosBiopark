#include <stdio.h>
#include <stdlib.h>

int main()
{
   float salario = 1200.00, c1 = 200.00, c2 = 120.00, multa, salariofinal;

   multa = (c1 * 1.02) + (c2 * 1.02);

   salariofinal = salario - multa;

   printf ("O saldo final de Joao vai ser de: %.2f", salariofinal);


}
