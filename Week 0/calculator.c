#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    char operator = get_char("Operator: ");

    if (operator == '+')
    {
        printf("%i + %i\n",x,y);
    }
    else if (operator == '-')
    {
        printf("%i is greater than %i\n",x,y);
    }
    else
    {
        printf("Please pick plus or minus\n");
    }
}