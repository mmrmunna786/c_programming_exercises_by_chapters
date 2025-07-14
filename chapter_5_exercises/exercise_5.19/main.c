/*
 Author: Munna
 Date: 14/07/2025
 */

/*
 The Problem:
 Write a function that displays at the left margin of the screen a solid square of asterisks whose side is specified in integer parameter side.
 For example, if side is 4, the function displays:

    ****
    ****
    ****
    ****

 */

#include <stdio.h>

void solidSquare(int x); // function prototype

int main() {
    int x;
    printf("Please enter side number: ");
    scanf("%d", &x);
    solidSquare(x);
    return 0;
}
void solidSquare(int x){
    int i, j;
    for ( i = 1; i <= x; i++){
        for ( j = 1; j <= x; j++){
            printf("*");
        }
        printf("\n");
    }
}