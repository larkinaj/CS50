#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    char operator = get_char("Operator: ");

    if (char == "+")
    {
        printf("%i is less than %i\n",x,y);
    }
    else if (char == "-")
    {
        printf("%i is greater than %i\n",x,y);
    }
    else
    {
        printf("Please pick plus or minus");
    }
}