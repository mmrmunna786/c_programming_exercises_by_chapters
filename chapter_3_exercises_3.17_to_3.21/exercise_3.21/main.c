/*
 Author: Munna
 Date: 11/07/2025
 */

/*
 The problem:
 Develop a program that will determine the gross pay for each of several employees.
 The company pays “straight time” for the first 40 hours worked by each employee and pays “time-and-a-half” for all hours worked in excess of 40 hours.
 You are given a list of the employees of the company, the number of hours each employee worked last week and the hourly rate of each employee.
 Your program should input this information for each employee, and should determine and display the employee’s gross pay.
 Here is a sample input/output dialog:

    Enter # of hours worked (-1 to end): 39
    Enter hourly rate of the worker ($00.00): 10.00
    Salary is $390.00


    Enter # of hours worked (-1 to end): 40
    Enter hourly rate of the worker ($00.00): 10.00
    Salary is $400.00


    Enter # of hours worked (-1 to end): 41
    Enter hourly rate of the worker ($00.00): 10.00
    Salary is $415.00


    Enter # of hours worked (-1 to end): -1
 */

#include <stdio.h>

int main() {
    float worked_hours = 0;
    float hourly_rate = 0;
    float salary = 0;

    printf("Enter no. of hours worked (-1 to end): ");
    scanf("%f", &worked_hours);

    while (worked_hours != -1){
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &hourly_rate);

        // checking whether the worked hours is more than 40 hours or not
        if (worked_hours > 40){
            float overtime_hours =  worked_hours - 40;
            float overtime_hourly_rate = overtime_hours * (hourly_rate / 2);
            // calculating the salary
            salary = (worked_hours * hourly_rate) + (overtime_hours * overtime_hourly_rate);
            // show the salary to the user
            printf("Salary is: $%.2f\n\n", salary);
        }
        else{
            // calculating the salary
            salary = worked_hours * hourly_rate;
            // show the salary to the user
            printf("Salary is: %.2f\n\n", salary);
        }
        printf("Enter no. of hours worked (-1 to end): ");
        scanf("%f", &worked_hours);
    }
    return 0;
}
