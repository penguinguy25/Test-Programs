// SUPER DUPER COOL DISCLAIMER
// This code isn't made to be used as an ACTUAL program,
// instead, it's just a series of tests that I will use to
// make my Counties in C game (and possibly States in C if
// this one is a success).
//
// That being said, this file is also part of a repo which
// will hold all of my C tests (and possibly other languages?).
//
// Cya!

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// game function
void county_game() {
    // stores counties
    char county[5];
    // array to store game counties
    char game_counties[3];

    // main game loop
    while(1) {
        printf("Guess a word!\n> ");
        scanf("%s", &county);
    }
}

// main menu
void menu() {
    char choice[2]; // char choice[2] for the null terminator

    // main loop
    while(1) {
        printf("County game practice program --- C test\nSelect an option:\n1.The game\n2.(not yet made)\n> ");
        fgets(choice, 2, stdin); // input function for menu selection
        choice[strcspn(choice, "\n")] = 0; // removing newline from previous statement
        int choice_int = atoi(choice); // converting to integer for speed and for switch casing

        // switch case for choice_int
        switch (choice_int) {
        case 1:
            county_game();

        // default case
        default:
            printf("That's not an option!\n");
        }
    }
}

int main() {

    // the "counties" which the user has to guess
    char counties[3][5] = {"bed", "bear", "bored"};

    // main program execution
    menu();
    return 0;
}
