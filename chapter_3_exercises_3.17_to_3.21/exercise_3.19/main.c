/*
 Author: Munna
 Date: 11/07/2025
 */

/*
 The problem:
 One large chemical company pays its salespeople on a commission basis.
 The salespeople receive $200 per week plus 9% of their gross sales for that week.
 For example, a sales-person who sells $5000 worth of chemicals in a week receives $200 plus 9% of $5000, or a total of $650.
 Develop a program that will input each salesperson’s gross sales for last week and will calculate and display that salesperson’s earnings.
 Process one salesperson’s figures at a time. Here is a sample input/output dialog:

 Enter sales in dollars (-1 to end): 5000.00
 Salary is: $650.00


 Enter sales in dollars (-1 to end): 1234.56
 Salary is: $311.11

 Enter sales in dollars (-1 to end): 1088.89
 Salary is: $298.00

 Enter sales in dollars (-1 to end): -1
 */

#include <stdio.h>

int main() {
    const int fixed_wages = 200;
    float sales_money = 0;
    float total_salary_with_commission = 0;
    float commission = 0.09;

    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &sales_money);

    while(sales_money != -1){
        // calculating the total salary
        total_salary_with_commission = fixed_wages + (sales_money * commission);
        printf("Salary is: %.2f\n\n", total_salary_with_commission);

        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales_money);
    }
    return 0;
}
