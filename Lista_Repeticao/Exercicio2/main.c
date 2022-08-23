#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  num1, num2, result;

    printf ("Enter the first number: \n");
    scanf ("%d", &num1);
    printf ("Enter to the power of: \n");
    scanf ("%d", &num2);

    while ((num1 > 0) && (num2 > 0)){
        result = num1 * num2;
        printf ("The result is: %d ", result);
        break;
    }
}
