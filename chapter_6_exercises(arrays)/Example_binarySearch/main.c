/*
 Demonstration binary search(more efficient than the linear search).

 This is the iterative version of function binarySearch. The function receives four arguments--an integer array "a" to be searched, an integer "searchKey", the "low" array subscript and the
 "high" array subscript(these define the portion of the array to be searched).
 If the search key does not match the middle element of a subarray, the low subscript or high subscript is modified so that a smaller subarray can be searched.
 If the search key is less than the middle element, the high subscript is set to "middle - 1" and the search is continued on the elements from low to "middle - 1".
 If the search key is greater than the middle element, the low subscript is set to "middle + 1" and the search is continued on the elements from "middle + 1" to high.
 */

//#include <stdio.h>
//#define SIZE 15
//int binarySearch(const int a[], int searchKey, int lowSubscript, int highSubscript); // function prototype
//
//int main() {
//    int i; // loop variable
//    int lowSubscript = 0;
//    int highSubscript = SIZE;
//    int searchKey;
//    int a[SIZE]; // definition of an integer array.
//
//    for ( i = 0; i < SIZE; i++ ) // populating the array
//    {
//        a[i] = i * 2;
//    } // end for loop
//
////    for ( int k = 0; k < SIZE; k++ ) // printing the array elements for verification
////    {
////        printf("%4d", a[k]);
////    }
//
////    printf("Please the search key: "); // taking the search key from the user
////    scanf("%d", &searchKey);
////    printf("Please the low subscript: ");
////    scanf("%d", &searchKey);
////    printf("Please the high subscript: ");
////    scanf("%d", &searchKey);
//
////    printf("\nThe middle element is %d", a[ SIZE / 2 ]);
//    return 0;
//}
//
///*
// If the search key does not match the middle element of a subarray, the low subscript or high subscript is modified so that a smaller subarray can be searched.
// If the search key is less than the middle element, the high subscript is set to "middle - 1" and the search is continued on the elements from low to "middle - 1".
// If the search key is greater than the middle element, the low subscript is set to "middle + 1" and the search is continued on the elements from "middle + 1" to high.
// */
//int binarySearch(const int a[], int searchKey, int lowSubscript, int highSubscript)
//{
//    int i; // loop variable
//
//    for ( i = 0; i < SIZE; i++ )
//    {
//        if ( a[ SIZE / 2 ] !=  searchKey)
//        {
//            if ( searchKey < a[ SIZE / 2 ])
//            {
//                highSubscript = (SIZE / 2) - 1;
//            }
//            else
//            {
//                lowSubscript = (SIZE / 2) + 1;
//            }
//        }
//        else
//        {
//            return a[ SIZE / 2 ];
//        }
//    }
//
//
//
//}



/* Fig. 6.19: fig06_19.c
   Binary search of an array */
#include <stdio.h>
#define SIZE 15

/* function prototypes */
int binarySearch(const int b[], int searchKey, int low, int high);
void printHeader(void);
void printRow(const int b[], int low, int mid, int high);

/* function main begins program execution */
int main(void)
{
    int a[SIZE]; /* create array a */
    int i; /* counter for initializing elements 0-14 of array a */
    int key; /* value to locate in array a */
    int result; /* variable to hold location of key or -1 */

    /* create data */
    for (i = 0; i < SIZE; i++) {
        a[i] = 2 * i;
    }
    printf("Enter a number between 0 and 28: ");
    scanf("%d", &key);
    printHeader();
    /* search for key in array a */
    result = binarySearch(a, key, 0, SIZE - 1);
    /* display results */
    if (result != -1) {
        printf("\n%d found in array element %d\n", key, result);
    }
    else {
        printf("\n%d not found\n", key);
    }
    return 0;
}
/* function to perform binary search of an array */
int binarySearch(const int b[], int searchKey, int low, int high)
{
    int middle; /* variable to hold middle element of array */
    /* loop until low subscript is greater than high subscript */
    while (low <= high) {
        /* determine middle element of subarray being searched */
        middle = (low + high) / 2;
        /* display subarray used in this loop iteration */
        printRow(b, low, middle, high);
        /* if searchKey matched middle element, return middle */
        if (searchKey == b[middle]) {
            return middle;
        }
            /* if searchKey less than middle element, set new high */
        else if (searchKey < b[middle]) {
            high = middle - 1; /* search low end of array */
        }
            /* if searchKey greater than middle element, set new low */
        else {
            low = middle + 1; /* search high end of array */
        }
    }

    return -1;  /* searchKey not found */
}
/* Print a header for the output */
void printHeader(void)
{
    int i; /* counter */
    printf("\nSubscripts:\n");
    /* output column head */
    for (i = 0; i < SIZE; i++) {
        printf("%3d ", i);
    }
    printf("\n"); /* start new line of output */

    /* output line of - characters */
    for (i = 1; i <= 4 * SIZE; i++) {
        printf("-");
    }
    printf("\n"); /* start new line of output */
}
/* Print one row of output showing the current
   part of the array being processed. */
void printRow(const int b[], int low, int mid, int high)
{
    int i; /* counter for iterating through array b */
    /* loop through entire array */
    for (i = 0; i < SIZE; i++) {
        /* display spaces if outside current subarray range */
        if (i < low || i > high) {
            printf("    ");
        }
        else if (i == mid) {  /* display middle element */
            printf("%3d*", b[i]); /* mark middle value */
        }
        else {  /* display other elements in subarray */
            printf("%3d ", b[i]);
        }
    }
    printf("\n"); /* start new line of output */
}