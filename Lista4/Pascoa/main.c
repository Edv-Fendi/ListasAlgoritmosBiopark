#include <stdio.h>
#include <stdlib.h>

int main()
{
   int y, g, c, x, z, e, n, d, Pascoa;

   printf ("Digite o ano: ");
   scanf ("%d", &y);

   if (y >= 1582){
    g = (y % 19) + 1;
    c = (y / 100) + 1;
    x = ((3 * c) / 4) - 12;
    z= ((8*c+5)/25) - 5;
    e= (11*g + 20 + z - x) % 30;

    if ((e == 25) && (g > 11) || (e == 24)){
        e++;

    }
    n = 44 - e;
    if ((n < 21)) {
        n = n + 30;
    }
    d  = ((5 * y) /4) - (x + 10);
    n = (n + 7) - ((d + n) % 7);
    if ( n > 31){
        Pascoa = n - 31;
        printf("A pascoa sera dia %d de Abril", Pascoa);
    }else {
        printf ("A pascoa sera dia %d de marco", n);
    }
   } else {
       printf ("O numero que voce digitou e invalido!!");
   }


}
