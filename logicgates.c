// logic gates
#include <stdio.h>

// NOT gate
int not(int bit)
{
    if(bit == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

// AND gate
int and(int bit1, int bit2)
{
    if(bit1 == 1 && bit2 == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// NAND gate
int nand(int bit1, int bit2)
{
    if(bit1 == 1 && bit2 == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

// OR gate
int or(int bit1, int bit2)
{
    if(bit1 == 1 || bit2 == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// NOR gate
int nor(int bit1, int bit2)
{
    if(bit1 == 1 || bit2 == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

// main program execution
int main()
{

    printf("%d\n", nor(0, 1));
    printf("%d\n", nor(1, 1));
    printf("%d\n", nor(0, 0));

    return 0;
}
