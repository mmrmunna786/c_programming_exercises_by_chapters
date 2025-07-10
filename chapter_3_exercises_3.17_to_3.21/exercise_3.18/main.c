/*
 Author: Munna
 Date: 10/07/2025
 */

/*
The problem:
 Develop a C program that will determine if a department store customer has exceeded the credit limit on a charge account. For each customer, the following facts are available:

1. Account number

2. Balance at the beginning of the month

3. Total of all items charged by this customer this month

4. Total of all credits applied to this customer’s account this month

5. Allowed credit limit

The program should input each of these facts, calculate the new balance (= beginning balance + charges − credits), and determine if the new balance exceeds the customer’s credit limit.
For those customers whose credit limit is exceeded, the program should display the customer’s account number, credit limit, new balance and the message “Credit limit exceeded.”
Here is a sample input/output dialog:

Enter account number (-1 to end): 100
Enter beginning balance: 5394.78
Enter total charges: 1000.00
Enter total credits: 500.00
Enter credit limit: 5500.00
Account:      100
Credit limit: 5500.00
Balance:      5894.78
Credit Limit Exceeded.
*/

#include <stdio.h>

int main() {
    int account_number = 0;
    float beginning_balance = 0;
    float total_charges = 0;
    float total_credits = 0;
    float credit_limit = 0;
    float new_balance = 0;

    printf("Enter account number (-1 to end): ");
    scanf("%d", &account_number);

    while(account_number != -1){
        printf("Enter beginning balance: ");
        scanf("%f", &beginning_balance);
        printf("Enter total charges: ");
        scanf("%f", &total_charges);
        printf("Enter total credits: ");
        scanf("%f", &total_credits);
        printf("Enter credit limit: ");
        scanf("%f", &credit_limit);

        new_balance = beginning_balance + total_charges - total_credits;

        if (new_balance > credit_limit){
            printf("Account: %d\t\n", account_number);
            printf("Credit limit: %.2f\t\n", credit_limit);
            printf("Balance: %.2f\t\n", new_balance);
            printf("Credit limit exceeded.\n\n");
        }

        printf("Enter account number (-1 to end): ");
        scanf("%d", &account_number);
    }
    return 0;
}
