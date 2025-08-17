/*
 Author: Munna
 Date: 14/07/2025
 */

/*
 The Problem:
 Write a function multiple that determines for a pair of integers whether the second integer is a multiple of the first.
 The function should take two integer arguments and return 1 (true) if the second is a multiple of the first, and 0 (false) otherwise.
 Use this function in a program that inputs a series of pairs of integers.
 */

#include <stdio.h>

int isSecondNumMultiple(int n1, int n2); // function prototype. If the first number is cleanly divisible by the second number i.e., the remainder is zerp then it is 1 otherwise 0.

int main() {
    int x, y;

    printf("Please enter your numbers: ");
    scanf("%d%d", &x, &y); // Waits for the user to enter two numbers separated by whitespace (e.g., 5 10).

    if ( isSecondNumMultiple(x, y) )
    {
        printf("YES! %d is a multiple of %d\n", y, x);
    }
    else
    {
        printf("NO! %d is not a multiple of %d\n", y, x);
    }
    return 0;
}
int isSecondNumMultiple(int x, int y){
    if ( x == 0 || y == 0 )
    {
        return 0;
    }
    else
    {
        if ( y % x == 0 )
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}