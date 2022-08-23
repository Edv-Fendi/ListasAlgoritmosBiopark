#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{


    for(int l=0; l<3; l++) {


        for(int c=0; c<3; c++) {
            if((l == c || l+c == 2)) {

                printf (" * ");
            } else {
                printf ("   ");

            }
        }

        printf("\n");
    }




    for(int l=0; l<3; l++) {


        for(int c=0; c<3; c++) {
            if((l == c || l+c == 2)) {

                printf (" * ");
            } else {
                printf ("   ");

            }
        }

        printf("\n");
    }

}
