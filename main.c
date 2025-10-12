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
        char* choice = malloc(2); // char choice[2] for the null terminator
        while(1) {
            printf("County game practice program --- C test\nSelect an option:\n1.The game\n2.(this doesnt exist lol)\n> ");
                fgets(choice, 2, stdin); // new input with fgets also modified this
            choice[strcspn(choice, "\n")] = 0; // removing newline
            int choice_int = atoi(choice); // converting because BLAZINGLY FAST

            switch (choice_int) { // switch casing choice_int!!!!!!!!111
            case 1: // first case in case choice_int == 1
                county_game(); // FIXME pls fix this this is probably so cursed and doesnt work anyway hehe

            default:
                printf("That's not an option!\n");
            }
            // add some default stuff or something in case choice_int is none of the cases
        }

    }

int main() {

    // stuff that start with the letter B
    char counties[3][5] = {"bed", "bear", "bored"};



    // main program execution
    menu();
    return 0;
}
