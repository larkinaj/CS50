#include <stdio.h>
#include <cs50.h>

int main (void)
{
    char agree = get_char("Do you agree? ");
    if (agree == 'y')
    {
        printf("You have agreed.\n");
    }
    else
    {
        printf("You have not agreed.\n");
    }
}