#include <stdio.h>
#include <string.h>
char* converter(char* str)
{
    // ruling out empty strings
    if(str[0] == '\0')
    {
        printf("hi\n");
    }
    else
    {
        int len = strlen(str);
        for(int i = 0; i < len; i++)
        {
            printf("%c", str[i]);
        }
        return 0;
    }
}

// main
int main()
{
    printf("%s\n", converter("101010"));
    return 0;
}
