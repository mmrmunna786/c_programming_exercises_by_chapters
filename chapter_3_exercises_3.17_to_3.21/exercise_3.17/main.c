/*
 Author: Munna
 Date: 07/07/2025
 */

/*The problem:
Drivers are concerned with the mileage obtained by their automobiles.
One driver has kept track of several tankful of gasoline by recording miles driven and gallons used for each tankful.
Develop a program that will input the miles driven and gallons used for each tankful.
The program should calculate and display the miles per gallon obtained for each tankful.
After processing all input information, the program should calculate and print the combined miles per gallon obtained for all tankfuls.
Here is a sample input/output dialog:
*/

/* Example output:
Enter the gallons used (-1 to end): 12.8
Enter the miles driven: 287
The miles / gallon for this tank was 22.421875


Enter the gallons used (-1 to end): 10.3
Enter the miles driven: 200
The miles / gallon for this tank was 19.417475


Enter the gallons used (-1 to end): 5
Enter the miles driven: 120
The miles / gallon for this tank was 24.000000


Enter the gallons used (-1 to end): -1

The overall average miles/gallon was 21.601423*/

#include <stdio.h>

int main() {
    float gallons_used = 0;
    int miles_driven = 0;
    int input_count = 0;
    float overall_average_miles_per_gallon = 0;

    printf("Enter the gallons used (-1 to end): ");
    scanf("%f", &gallons_used);

    while (gallons_used != -1){
        input_count++;
        printf("Enter miles driven: ");
        scanf("%d", &miles_driven);
        overall_average_miles_per_gallon += miles_driven/gallons_used;
        printf("The miles/gallon for this tank was %f\n", miles_driven/gallons_used);

        printf("Enter the gallons used (-1 to end): ");
        scanf("%f", &gallons_used);
    }

    printf("The overall average miles/gallon was %f", overall_average_miles_per_gallon/input_count);
    return 0;
}
