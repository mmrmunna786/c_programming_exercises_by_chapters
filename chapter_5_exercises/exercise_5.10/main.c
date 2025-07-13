/*
 Author: Munna
 Date: 13/07/2025
 */

/*
 The Problem:
 An application of function floor is rounding a value to the nearest integer.
 The statement: y = floor( x + .5 ); will round the number x to the nearest integer and assign the result to y.
 Write a program that reads several numbers and uses the preceding statement to round each of these numbers to the nearest integer.
 For each number processed, print both the original number and the rounded number.
 */

#include <stdio.h>
#include <math.h>

float roundNumber(float x);

// function main begins program execution
int main() {
    float x; // user input variable



    // loop forever until user input is ctrl+d(for mac)
    while(x != EOF){ //
        printf("Please enter your number: "); // prompt to user
        scanf("%f", &x); // user input into variable x
        printf("You have entered %.2f and the rounded number is %.2f\n", x, roundNumber(x)); // showing the user their inputted value and the rounded value by calling the roundNumber() function
    }
    return 0; // end of program
}

float roundNumber(float x){ // function to compute the rounded down value
    return floor( x + .5 );
}