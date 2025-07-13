/*
 Author: Munna
 Date: 13/07/2025
 */

/*
 The Problem:
 A parking garage charges a $2.00 minimum fee to park for up to three hours.
 The garage charges an additional $0.50 per hour for each hour or part thereof in excess of three hours.
 The maximum charge for any given 24-hour period is $10.00. Assume that no car parks for longer than 24 hours at a time.
 Write a program that will calculate and print the parking charges for each of three customers who parked their cars in this garage yesterday.
 You should enter the hours parked for each customer.
 Your program should print the results in a neat tabular format, and should calculate and print the total of yesterday’s receipts.
 The program should use the function calculateCharges to determine the charge for each customer.
 Your outputs should appear in the following format:

 Car     Hours     Charge
  1       1.5       2.00
  2       4.0       2.50
  3      24.0      10.00
TOTAL    29.5      14.50
 */

#include <stdio.h>

float calculateCharges(float hours); /* function prototype */

/* 1st version */
//int main() {
//    int car = 1;
//    float hours;
//    float charge;
//
//    printf("Enter the number of hours parked by car no. %d: ", car);
//    scanf("%f", &hours);
//    printf("%s%7s%8s\n", "Car", "Hours", "Charge");
//
//    while ( car <= 3 ){
//        if ( hours > 24.0 ){
//            printf("Invalid hours entered.\n");
//            printf("Enter the number of hours parked: ");
//            scanf("%f", &hours);
//        }
//        else{
//            charge = calculateCharges(hours);
//        }
//        /* showing user the output */
//        printf("%2d%7.1f%8.2f\n", car, hours, charge);
//        car++;
//        printf("Enter the number of hours parked: ");
//        scanf("%f", &hours);
//    }
//    return 0;
//}
//float calculateCharges( float hours ){ /* returns the charge based on the hours */
//    const float standard_charge = 2.0;
//    if ( hours > 3.0 )
//    {
//        if ( hours == 24 )
//        {
//            return 10.0;
//        }
//        else
//        {
//            float extra_hours = hours - 3.0;
//            float charge_for_extra_hours = extra_hours * 0.50;
//            float total_charge = charge_for_extra_hours + 2.0;
//            return total_charge;
//        }
//    }
//    else
//    {
//        return 2.00;
//    }
//}

/* 2nd version */
int main(){
    int i;
    float hours_parked_1, hours_parked_2, hours_parked_3;

    printf("Please enter the hours parked by car no. 1: ");
    scanf("%f", &hours_parked_1);
    float charge_for_car_1 = calculateCharges(hours_parked_1);
    printf("Please enter the hours parked by car no. 2: ");
    scanf("%f", &hours_parked_2);
    float charge_for_car_2 = calculateCharges(hours_parked_2);
    printf("Please enter the hours parked by car no. 3: ");
    scanf("%f", &hours_parked_3);
    float charge_for_car_3 = calculateCharges(hours_parked_3);

    printf("%s%7s%8s\n", "Car", "Hours", "Charge");
    printf("%2d%9.1f%10.2f\n", 1, hours_parked_1, charge_for_car_1);
    printf("%2d%9.1f%10.2f\n", 2, hours_parked_2, charge_for_car_2);
    printf("%2d%9.1f%10.2f\n", 1, hours_parked_3, charge_for_car_3);
    printf("%s%6.1f%10.2f\n", "TOTAL", ( hours_parked_1 + hours_parked_2 + hours_parked_3 ), ( charge_for_car_1 + charge_for_car_2 + charge_for_car_3 ) );
    return 0;
}

float calculateCharges( float hours ){ /* returns the charge based on the hours */
    if ( hours > 3.0 )
    {
        if ( hours == 24 )
        {
            return 10.0;
        }
        else
        {
            float extra_hours = hours - 3.0;
            float charge_for_extra_hours = extra_hours * 0.50;
            float total_charge = charge_for_extra_hours + 2.0;
            return total_charge;
        }
    }
    else
    {
        return 2.00;
    }
}