/*
 Author: Munna
 Date: 18/07/2025
 */

/*
 The problem:
 The bubble sort presented in Fig. 6.15 is inefficient for large arrays.
 Make the following simple modifications to improve the performance of the bubble sort:

 1. After the first pass, the largest number is guaranteed to be in the highest-numbered element of the array;
 after the second pass, the two highest numbers are “in place,” and so on. Instead of making nine comparisons on every pass,
 modify the bubble sort to make eight comparisons on the second pass, seven on the third pass and so on.

 2. The data in the array may already be in the proper order or near-proper order, so why make nine passes if fewer will suffice?
 Modify the sort to check at the end of each pass whether any swaps have been made.
 If none has been made, then the data must already be in the proper order, so the program should terminate.
 If swaps have been made, then at least one more pass is needed.
 */

#include <stdio.h>
#include <time.h>  // Required for clock() and CLOCKS_PER_SEC
#define SIZE 10

/* demonstration of bubble sort */

int main() {
    clock_t start, end;
    double cpu_time_used;

    // Record starting time
    start = clock();

    /* initialize a */
    int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int pass; /* passes counter */
    int i;    /* comparisons counter */
    int hold; /* temporary location used to swap array elements */
    int isSorted;

    printf( "Data items in original order\n" );

    /* output original array */
    for ( i = 0; i < SIZE; i++ ) {
        printf( "%4d", a[ i ] );
    } /* end for */



    /* bubble sort */
    /* loop to control number of passes */
    for ( pass = 1; pass < SIZE; pass++ ){
        isSorted = 1; // assuming the array is sorted already
        /* loop to control number of comparisons per pass */
        for ( i = 0; i < SIZE - pass; i++ ){ // as pass increase then comparisons should decrease
            if ( a[ i ] > a[ i + 1 ] ){
                // if in any comparison of "a[ i ] > a[ i + 1 ]" is true then array is unsorted and must go and compare further, otherwise break out from the outer loop
                hold = a[ i ];
                a[ i ] = a[ i + 1 ];
                a[ i + 1 ] = hold;

                isSorted = 0; // if comparison are taking place means array isn't sorted yet
            } /* end if */
        } // end inner for
        if (isSorted)
        {
            break;
        }
    } // end outer for

    printf( "\nData items in ascending order\n" );

    // output odf sorted array
    for ( i = 0; i < SIZE; i++ ){
        printf( "%4d", a[ i ] );
    } /* end for */

    printf( "\n" );
    // Record ending time
    end = clock();

    // Calculate elapsed time in seconds
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nExecution time: %f seconds\n", cpu_time_used);

    return 0; /* indicates successful termination */
}
