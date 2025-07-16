// demonstration of linear search, the goal is to take a arbitrary key value and searching though the array, if found then return the index position of the key value.

#include <stdio.h>
#define SIZE 100

int linearSearch(const int a[], int searchKey, int size); // function prototype

int main() {
    int i; // counter variable to create data for the array
    int searchKey; // this is the arbitrary user inputted value to search into the array
    int indexPosOfSearchKey; // this is the index position of the search key in the array
    int dataArray[SIZE]; // defining an array with 100 elements in it

    for ( i = 0; i < SIZE; i++ ) // populating the array using a for loop
    {
        dataArray[i] = i * 2;
    }

    // taking the input from the user for a searchKey
    printf("Please enter your search key: ");
    scanf("%d", &searchKey);

    indexPosOfSearchKey = linearSearch(dataArray, searchKey, SIZE); // obtaining the index position of the user inputted search key

    if ( indexPosOfSearchKey != -1 ) // if search key is found then we will display index position of the search key
    {
        printf("The index position of search key is: %d", indexPosOfSearchKey);
    }
    else
    {
        printf("Search key does not exist in the array.");
    }
    return 0;
}
int linearSearch(const int a[], int searchKey, int size)
{
    int i; // loop variable

    for ( i = 0; i < size; i++ )
    {
        if ( a[i] == searchKey )
        {
            return i;
        }
    }
    return -1;
}