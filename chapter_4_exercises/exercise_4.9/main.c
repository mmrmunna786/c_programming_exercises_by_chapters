/*
 Author: Munna
 Date: 12/07/2025
 */

/*

 Exercise 4.9:

 The problem:

Write a program that sums a sequence of integers.
Assume that the first integer read with scanf specifies the number of values remaining to be entered.
Your program should read only one value each time scanf is executed.
A typical input sequence might be 5 100 200 300 400 500 where the 5 indicates that the subsequent five values are to be summed.

 */

#include <stdio.h>

int main() {
    int values_to_be_entered, i, value;
    int sum = 0;

    printf("Enter how may values to be summed (-1 to end): ");
    scanf("%d", &values_to_be_entered);

    while(values_to_be_entered != -1){
        for (i = 1; i <= values_to_be_entered; i++){
            printf("Enter value no. %d: ", i);
            scanf("%d", &value);
            sum += value;
        }
        // show to the user the 5 consecutive summed value
        printf("Summed value: %d\n\n", sum);
        printf("Enter how may values to be summed (-1 to end): ");
        scanf("%d", &values_to_be_entered);
    }
    return 0;
}
