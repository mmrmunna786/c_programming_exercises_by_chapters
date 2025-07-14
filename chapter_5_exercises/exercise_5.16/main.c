/*
 Author: Munna
 Date: 14/07/2025
 */

/*
 The Problem:
 Write a function integerPower( base, exponent ) that returns the value of
 base^exponent
 For example, integerPower( 3, 4 ) = 3 * 3 * 3 * 3.
 Assume that exponent is a positive, nonzero integer, and base is an integer.
 Function integerPower should use for to control the calculation.
 Do not use any math library functions.
 */

#include <stdio.h>

unsigned long int integerPower(unsigned int b, unsigned int e); // function prototype

int main() {
    unsigned int base, exponent;
    printf("Please enter the base: ");
    scanf("%u", &base);
    printf("Please enter the exponent: ");
    scanf("%u", &exponent);
    printf("base %u to the power of %u is equal to: %lu\n",base, exponent, integerPower(base,exponent));
    return 0;
}

unsigned long int integerPower(unsigned int b, unsigned int e){
    unsigned int i;
    unsigned int result = 1;
    for ( i = 1; i <= e; i++ ){
        result *= b;
    }
    return result;
}