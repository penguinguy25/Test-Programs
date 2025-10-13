// Test program for the Collatz conjecture
// Super inefficient way to prove the hypothesis
//
// Worth mentioning that this program runs a
// never-ending loop, so keep that in mind
//
/* Some info that might make my code more readable:
- The main loop is the one that will re-establish y to the value of x AFTER x has been incremented by the secondary loop.
- The secondary loop breaks after y reaches 1, returning back to the first loop to restart the process, this time with an integer incremented by one.
*/
// Main code
#include <stdio.h>
int main()
{
    // starter x value
    unsigned long x = 1;

    // main loop
    while(1)
    {
        unsigned long y = x;

        // secondary loop
        while(1)
        {
            if(y == 1)
            {
                printf("%d reached 1, Collatz conjecture works\n", x);
                x++;
                break; // returns back to main loop
            }
            else if(y % 2)
            {
                y = y * 3 + 1;
            }
            else
            {
                y = y / 2;
            }
        }
    }
    return 0;
}
