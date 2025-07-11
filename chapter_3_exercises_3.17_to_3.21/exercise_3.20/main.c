/*
 Author: Munna
 Date: 11/07/2025
 */

/*
 The problem:
 The simple interest on a loan is calculated by the formula: interest = principal * rate * days / 365;
 The preceding formula assumes that rate is the annual interest rate, and therefore includes the division by 365 (days).
 Develop a program that will input principal, rate and days for several loans, and will calculate and display the simple interest for each loan, using the preceding formula.
 Here is a sample input/output dialog:

    Enter loan principal (-1 to end): 1000.00
    Enter interest rate: .1
    Enter term of the loan in days: 365
    The interest charge is $100.00


    Enter loan principal (-1 to end): 1000.00
    Enter interest rate: .08375
    Enter term of the loan in days: 224
    The interest charge is $51.40


    Enter loan principal (-1 to end): 10000.00
    Enter interest rate: .09
    Enter term of the loan in days: 1460
    The interest charge is $3600.00


    Enter loan principal (-1 to end): -1
 */

#include <stdio.h>

int main() {
    float loan_principle = 0;
    float interest_rate = 0;
    int loan_length_in_days = 0;

    float interest_charge = 0;

    printf("Enter loan principal (-1 to end): ");
    scanf("%f", &loan_principle);

    while(loan_principle != -1){
        printf("Enter interest rate: ");
        scanf("%f", &interest_rate);
        printf("Enter term of the loan in days: ");
        scanf("%d", &loan_length_in_days);

        // calculating the interest charge
        interest_charge = loan_principle * interest_rate * loan_length_in_days / 365;

        // showing the calculated interest charge to the user
        printf("The interest charge is: $%.2f\n\n", interest_charge);

        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &loan_principle);
    }
    return 0;
}
