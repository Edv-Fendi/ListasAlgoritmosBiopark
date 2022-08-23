#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int number, number2=0;



    do{
        printf ("Digite um numero: \n");
        scanf ("%d", &number);
    if(number >=0){
        number2 = number2 + number;


    }while (number >= 0);
    printf("\nO resultado e: %d",  number2);



}





