// Why did i lowk name this rocketsim
// :rofl:
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void function()
{
    printf("cool cool cool\n");
}

void function2()
{
    printf("uhhh no\n");
}

void test()
{
    printf("just a test\n");
}


int main()
{
    char option[100];

    while(1)
    {
        printf("Main menu\n1. Function\n2. Function but 2\n3. Test\n> ");

        fgets(option, 5, stdin);
        option[strcspn(option, "\n")] = 0;
        int i_option = atoi(option);

        switch(i_option)
        {
        case 1:
            function();
            break;
        case 2:
            function2();
            break;
        case 3:
            test();
            break;
        default:
            printf("that's not an option\n");
        }
    }

    return 0;
}
