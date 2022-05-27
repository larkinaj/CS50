#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("x: ");
    char operator = get_char("Operator(plus or minus): ");
    int y = get_int("y: ");

    if (operator == '+')
    {
        printf("%i\n",x + y);
    }
    else if (operator == '-')
    {
        printf("%i\n",x - y);
    }
    else
    {
        printf("Please pick plus or minus\n");
    }
}