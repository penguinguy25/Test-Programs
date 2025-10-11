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

int main() {

    // stuff that start with the letter B
    char counties[3][5] = {"bed", "bear", "bored"};



    // game function
    void county_game() {
        // defining some stuff before the actual game
        // array for game_counties
        char county[5];
        char game_counties[3];

        // main game
        // main loop
        while(1) {
            printf("Guess a word!\n> ");
            scanf("%s", &county);

        }
    }

    // main menu
    void menu() {
        char choice[1];
        while(1) {
            printf("County game practice program --- C test\nSelect an option:\n1.The game\n2.(this doesnt exist lol)\n> ");
            scanf("%s", &choice);
            if (choice == "1") {
                // go to the county game
                county_game();
            } else {
                // FIXME this literally breaks if you type a non-integer --- PATCHED, all i had to do was change choice to char type lol
                // otherwise repeat loop
                printf("That's not an option!\n");
            }
        }

    }


    // main program execution
    menu();
    return 0;
}
