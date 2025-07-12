/*
 Author: Munna
 Date: 12/07/2025
 */

/*

 Exercise 4.7:

 The problem:

 Write for statements that print the following sequences of values:
 1, 2, 3, 4, 5, 6, 7
 3, 8, 13, 18, 23
 20, 14, 8, 2, −4, −10
 19, 27, 35, 43, 51

 */


#include <stdio.h>

int main() {
    int i,j,k,l;
    for (i = 1; i <= 7; i++){
        printf("%d", i);
        if (i < 7) printf(", ");
    }

    printf("\n");

    for (j = 3; j <= 23; j+= 5){
        printf("%d", j);
        if (j < 23) printf(", ");
    }

    printf("\n");

    for (k = 20; k >= -10; k-= 6){
        printf("%d", k);
        if (k > -10) printf(", ");
    }

    printf("\n");

    for (l = 19; l <= 51; l+= 8){
        printf("%d", l);
        if (l < 51) printf(", ");
    }

    return 0;
}
