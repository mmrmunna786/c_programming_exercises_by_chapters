/*
 Author: Munna
 Date: 14/07/2025
 */

/*
 The Problem:
 Define a function called hypotenuse that calculates the length of the hypotenuse of a right triangle when the other two sides are given.
 Use this function in a program to determine the length of the hypotenuse for each of the following triangles.
 The function should take two arguments of type double and return the hypotenuse as a double. Test your program with the side values specified in Fig. 5.18.

Table 5.18. Sample triangle side values for Exercise 5.15.

Triangle    Side 1      Side 2
    1          3.0         4.0

    2          5.0        12.0

    3          8.0        15.0

 */

#include <stdio.h>
#include <math.h>

double hypotenuse(double x, double y); // function prototype

int main() {
    printf("Length of the hypotenuse of triangle 1: %.2f\n", hypotenuse(3.0, 4.0));
    printf("Length of the hypotenuse of triangle 1: %.2f\n", hypotenuse(5.0, 12.0));
    printf("Length of the hypotenuse of triangle 1: %.2f\n", hypotenuse(8.0, 15.0));
    return 0;
}

double hypotenuse(double x, double y){
    return hypot(x, y); // this is equivalent to sqrt( x^2 + y^2 )
}