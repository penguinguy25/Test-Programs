// binary converter
#include <stdio.h>
#include <string.h>
int convert(char *binary_str)
{
    int counter = 0;

    // store the result
    int ascii = 0;

    // length
    if(strlen(binary_str) == 0)
    {
        printf("String empty\n");
    }
    else
    {
        // temporary string
        char temp[100];
        // copying into temp
        strcpy(temp, binary_str);
        // reversing temp (to avoid segfaulting)
        char* reverse_str = strrev(temp);

        // loop over new string until string termination
        for(int i = 0; reverse_str[i] != '\0'; i++)
        {
            // normal base 2 conversion
            if(reverse_str[i] == '1')
            {
                ascii += (1 << counter);
            }
            // normal base 2 conversion
            counter++;
        }
        // final result
        return ascii;
    }
}
// main
int main()
{
    printf("%d\n", convert("1001001"));

    return 0;
}
