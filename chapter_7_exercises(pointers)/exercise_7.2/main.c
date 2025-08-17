/*
 Author: Munna
 Date: 23/07/2025
 */

/*
 The Problem:

Modify the program in Fig. 7.24 so that the card-dealing function deals a five-card poker hand.

Then write the following additional functions:

Determine if the hand contains a pair.

Determine if the hand contains two pairs.

Determine if the hand contains three of a kind (e.g., three jacks).

Determine if the hand contains four of a kind (e.g., four aces).

Determine if the hand contains a flush (i.e., all five cards of the same suit).

Determine if the hand contains a straight (i.e., five cards of consecutive face values).

 */

/* Fig. 7.24: fig07_24.c
   Card shuffling dealing program */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* defining a struct to store five card poker hand */
typedef struct{
    int face;
    int suit;
} fiveCardPokerHand;

/* prototypes */
void shuffle(int wDeck[][13]);
void deal5cph(const int wDeck[][13], const char *wFace[], const char *wSuit[], fiveCardPokerHand fiveCardPokerHand1[]);
//void printFiveCardPokerHand(const fiveCardPokerHand[], const char *wFace[], const char *wSuit[]);
void isContainsPair(const fiveCardPokerHand a[]);

int main(void)
{

    /* defining an array of type "fiveHandPokerHand" */
    fiveCardPokerHand fiveCardPokerHand1[5];
    /* initialize suit array */
    const char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    /* initialize face array */
    const char *face[13] = {
            "Ace", "Deuce", "Three", "Four",
            "Five", "Six", "Seven", "Eight",
            "Nine", "Ten", "Jack", "Queen", "King"
    };

    /* initialize deck array */
    int deck[4][13] = {0};

    srand(time(0)); /* seed random-number generator */

    shuffle(deck);
    printf("\nFive card poker hand:\n");
    deal5cph(deck, face, suit, fiveCardPokerHand1);

    /* print if 5 card poker hand contains a pair */
    isContainsPair(fiveCardPokerHand1);

    return 0;
}

/* shuffle cards in deck */
void shuffle(int wDeck[][13])
{
    int row;    /* row number */
    int column; /* column number */
    int card;   /* counter */

    /* for each of the 52 cards, choose slot of deck randomly */
    for (card = 1; card <= 52; card++) {
        /* choose new random location until unoccupied slot found */
        do {
            row = rand() % 4;
            column = rand() % 13;
        } while(wDeck[row][column] != 0);

        /* place card number in chosen slot of deck */
        wDeck[row][column] = card;
    }
}

/* deal cards in deck */
void deal5cph(const int wDeck[][13], const char *wFace[], const char *wSuit[], fiveCardPokerHand fiveCardPokerHand1[])
{
    int card;   /* card counter */
    int row;    /* row counter */
    int column; /* column counter */
    int cardsForPoker = 0;


    /* deal each of the 52 cards */
    for ( card = 1; card <= 5 && cardsForPoker < 5; card++ ) {
        /* loop through rows of wDeck */
        for (row = 0; row <= 3; row++) {
            /* loop through columns of wDeck for current row */
            for (column = 0; column <= 13; column++) {
                /* if slot contains current card, display card */
                if (wDeck[row][column] == card) {
                    fiveCardPokerHand1[cardsForPoker].face = column;
                    fiveCardPokerHand1[cardsForPoker].suit = row;
                    cardsForPoker++;
                    printf("%5s of %-8s%c", wFace[column], wSuit[row],
                           card % 2 == 0 ? '\n' : '\t');
                }
            }
        }
    }
}
/* checking if the array of type "fiveCardPokerHand" contains a pair */
void isContainsPair(const fiveCardPokerHand a[])
{
    int i; /* loop variable */
    for ( i = 0; i < 5; i++ )
    {
        if ( a[i].face == i )
        {
            printf("\n\nYES! contains a pair\n");
        }
    }
}