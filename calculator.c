#include <stdio.h>
// addition
int add(int a, int b)
{
    return a + b;
}
// substraction
int sub(int a, int b)
{
    return a - b;
}
// multiplication
int mult(int a, int b)
{
    return a * b;
}
// division
int div(int a, int b)
{
    return a / b;
}
// main
int main()
{
    printf("The result is: %d\n", mult(7, 8));

    return 0;
}
