// collatz conjecture test but no printing
// should improve speed
//
// btw this project also runs an infinite loop
// similar to conjecture.c, so keep that in mind
#include <stdio.h>
int main()
{
    unsigned long x = 1;
    unsigned long i;

    while(i < 10000000)
    {
        unsigned long y = x;
        while(1)
        {
            if(y == 1)
            {
                x++;
                i++;
                break;
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

    printf("Finished after %d steps!", i);
    return 0;
}
