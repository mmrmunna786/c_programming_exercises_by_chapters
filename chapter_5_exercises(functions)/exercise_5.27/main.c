/*
 Author: Munna
 Date: 17/08/2025
 */

/*
 The Problem:

An integer is said to be prime if it is divisible by only 1 and itself. For example, 2, 3, 5 and 7 are prime, but 4, 6,
8 and 9 are not.

a) Write a function that determines if a number is prime.

b) Use this function in a program that determines and prints all the prime numbers between 1 and 10,000.
How many of these 10,000 numbers do you really have to test before being sure that you have found all the primes?

c) Initially you might think that n/2 is the upper limit for which you must test to see if a number is prime, but you need
go only as high as the square root of n. Why? Rewrite the program, and run it both ways. Estimate the performance improvement.

 */

#include <stdio.h>
#include <stdbool.h>

bool isPrime( int a ); // function prototype

int main() {
    // determining if a


    int i;

    for ( i = 1; i <= 10000; i++ )
    {
        if ( isPrime( i ) )
        {
            printf( "\n%d is a prime number\n", i );
        }
        else
        {
            printf( "\n%d is not a prime number\n", i );
        }
    }

    return 0;
}
bool isPrime( int a )
{
    int divisor = 2;
    while ( 1 )
    {
        if ( divisor < a )
        {
            if ( a % divisor == 0 )
            {
                return false;
            }
            else
            {
                divisor += 1;
            }
        }
        else
        {
            return true;
        }

    }
}