/*
 Author: Munna
 Date: 14/07/2025
 */

/*
 The Problem:
 For each of the following sets of integers, write a single statement that will print a number at random from the set.

1. 2, 4, 6, 8, 10.

2. 3, 5, 7, 9, 11.

3. 6, 10, 14, 18, 22.

 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL)); // this is to get different random number each time the program is run
    printf("The random number_1: %d\n", 2 * ( 1 + rand() % 5 ) );
    printf("The random number_2: %d\n", 2 * ( 1 + rand() % 5 ) + 1 );
    printf("The random number_1: %d\n", 4 * ( 1 + rand() % 5 ) + 2);
    return 0;
}
