/*
 Author: Munna
 Date: 16/07/25
 */

/*
 The problem:
 Use a single-subscripted array to solve the following problem. A company pays its sales-people on a commission basis.
 The salespeople receive $200 per week plus 9% of their gross sales for that week.
 For example, a salesperson who grosses $3000 in sales in a week receives $200 plus 9% of $3000, or a total of $470.
 Write a C program (using an array of counters) that determines how many of the salespeople earned salaries in each of the following ranges
 (assume that each salesperson’s salary is truncated to an integer amount):

    $200–299

    $300–399

    $400–499

    $500–599

    $600–699

    $700–799

    $800–899

    $900–999

    $1000 and over
 */

#include <stdio.h>
#define SIZE 3

void GeneralSalesReport( const int a[] ); // function prototype
void salesReport( const int a[] ); // function prototype

int main() {
    int salesPeopleEarnings[ SIZE ] = {0}; // assuming 10 salespeople working for the company
    int grossSale;
    int i;

    for ( i = 0; i < SIZE; i++ )
    {
        printf( "Enter how much is your gross sale for this week %d: ", i + 1 );
        scanf( "%d", &grossSale );
        salesPeopleEarnings[ i ] = grossSale;
    }

    salesReport( salesPeopleEarnings );

    return 0;
}
void GeneralSalesReport( const int a[] )
{
    int i; // loop variable

    for ( i = 0; i < SIZE; i++ )
    {
        printf( "%c%3d",'$' , a[ i ] );
        if ( i < SIZE - 1)
        {
            printf( ", " );
        }
        else
        {
            printf( "\n" );
        }
    }
}
void salesReport( const int a[] )
{
    int i; // loop variable
    int eliteSales[SIZE] = {0}; // defined and initialised to zero.
    for ( i = 0; i < SIZE; i++ )
    {
        if ( a[i] >= 200 && a[i] <= 299 )
        {
            eliteSales[i] = 200 + ( 0.09 * ( a[ i ] ) );
        }
        else if ( a[i] >= 300 && a[i] <= 399 )
        {
            eliteSales[i] = 200 + ( 0.09 * ( a[ i ] ) );
        }
        else if ( a[i] >= 400 && a[i] <= 499 )
        {
            eliteSales[i] = 200 + ( 0.09 * ( a[ i ] ) );
        }
        else if ( a[i] >= 500 && a[i] <= 599 )
        {
            eliteSales[i] = 200 + ( 0.09 * ( a[ i ] ) );
        }
        else if ( a[i] >= 600 && a[i] <= 699 )
        {
            eliteSales[i] = 200 + ( 0.09 * ( a[ i ] ) );
        }
        else if ( a[i] >= 700 && a[i] <= 799 )
        {
            eliteSales[i] = 200 + ( 0.09 * ( a[ i ] ) );
        }
        else if ( a[i] >= 800 && a[i] <= 899 )
        {
            eliteSales[i] = 200 + ( 0.09 * ( a[ i ] ) );
        }
        else if ( a[i] >= 900 && a[i] <= 999 )
        {
            eliteSales[i] = 200 + ( 0.09 * ( a[ i ] ) );
        }
        else if ( a[i] >= 1000 )
        {
            eliteSales[i] = 200 + ( 0.09 * ( a[ i ] ) );
        }
        else
        {
            eliteSales[i] = 200;
        }
    }
    printf( "%s%s","\n          Sales report in the elite range", "\n-------------------------------------------------------\n" );
    printf( "%s%17s%20s", "Sales person no.", "Total Sale" , "Gross Earning\n" );
    for ( i = 0; i < SIZE; i++ )
    {
        printf( "%8d%19c%d%14c%d\n", i+1 , '$' , a[i] , '$' ,eliteSales[ i ] );
    }
}