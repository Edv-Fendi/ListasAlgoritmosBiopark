#include <stdio.h>
#include <stdlib.h>

void main () {
    int x, y;

    printf("Digite x: \n");
    scanf ("%d", &x);

    printf("Digite y: \n");
    scanf ("%d", &y);

    x = x + y;
    y  = x - y;

    x = x - y;

    printf ("O valor de x: %d \nO valor de Y: %d", x, y);
}

