/*
 Author: Munna
 Date: 14/07/2025
 */

/*
 The Problem:
 Modify the function created in Exercise 5.19 to form the square out of whatever character is contained in character parameter fillCharacter.
 Thus, if side is 5 and fillCharacter is “#” then this function should print:

    #####
    #####
    #####
    #####
    #####

 */

#include <stdio.h>

void solidSquare(int x, char c); // function prototype

int main() {
    int x;
    char c;
    printf("Please enter side number: ");
    scanf("%d", &x);
    printf("Please enter character: ");
    scanf(" %c", &c);
    solidSquare(x, c);
    return 0;
}
void solidSquare(int x, char c){
    int i, j;
    for ( i = 1; i <= x; i++){
        for ( j = 1; j <= x; j++){
            printf("%c", c);
        }
        printf("\n");
    }
}