/*
 Author: Munna
 Date: 18/08/2025
 */

/*
 Description:
 This program computes the divided voltage in a circuit.
 Inputs: supply voltage, first resistor value, second resistor value
 Output: computed output voltage based on the voltage divider formula
 */

#include <stdio.h>

int getValidIntInput( const char *prompt ); // function prototype for input validation

int main() {
//    int v_in, R1, R2;
    // get the supply voltage from the user
    int v_in = getValidIntInput( "Please enter the supply voltage: " );
    // get the resistor values
    int R1 = getValidIntInput( "Please enter the value of R1: " );
//    printf( "\nPlease enter the value of R1: " );
//    scanf( "%d", &R1 );
    int R2 = getValidIntInput( "Please enter the value of R2: " );
//    printf( "\nPlease enter the value of R2: " );
//    scanf( "%d", &R2 );
    // calculate voltage using voltage divider formula: v_out = v_in * ( r2 / ( r1 + r2 ) )

    // checking zero division error ( r1+r2 = 0 )
    while ( 1 )
    {
        if ( R1 + R2 == 0 )
        {
            printf( "\nWrong resistor values inputted.\n" );
            R1 = getValidIntInput( "Please enter the value of R1: " );
            R2 = getValidIntInput( "Please enter the value of R2: " );
        }
        else
        {
            break;
        }
    }


    float v_out = v_in * ( R2 / ( float ) ( R1 + R2 ) );
    // print the value of the output voltage
    printf( "\nThe output/divided voltage is: %.2f\n", v_out );
    return 0;
}

// Function to validate integer input
int getValidIntInput( const char *prompt )
{
    int value;
    while (1) // keep asking for only an integer
    {
        printf( "\n%s", prompt );
        if ( scanf( "%d", &value ) == 1 ) // if scanf() returns 1 that means user has entered an integer
        {
            break; // break out of while loop
        }
        else // if user did not enter an integer then ask again
        {
            printf( "\nSorry, you did not enter an integer\n");
            while ( getchar() != '\n' ); // getchar() will read chars and discard them including the new line character,
            // because we are not storing its( getchar() ) in any variable.
        }
    }
    return value;
}
