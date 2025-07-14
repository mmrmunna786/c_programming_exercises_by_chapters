/*
 Author: Munna
 Date: 14/07/2025
 */

/*
 The Problem:
 Write a program that inputs a series of integers and passes them one at a time to function even, which uses the remainder operator to determine if an integer is even.
 The function should take an integer argument and return 1 if the integer is even and 0 otherwise.
 */

#include <stdio.h>

int isEven(int x); // function prototype

int main() {
    int num;

    while ( 1 )
    {
        printf("please enter your number ( 0 to end ): ");
        scanf("%d", &num);

        if ( num == 0 ){
            break;
        }
        if ( isEven( num ) )
        {
            printf("number %d is even.\n", num);
        }
        else
        {
            printf("number %d is odd.\n", num);
        }
    }
    return 0;
}
int isEven(int x){
    if ( x % 2 == 0 ){
        return 1;
    }
    return 0;
}