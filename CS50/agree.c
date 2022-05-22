#include <stdio.h>
#include <cs50.h>

int main (void)
{
    char agree = get_char("Do you agree? ");
    if (agree == 'y' || agree = 'n')
    {
        printf("You have agreed.\n");
    }
    else
    {
        printf("You have not agreed.\n");
    }
}