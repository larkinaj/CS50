#include <stdio.h>
#include <cs50.h>

int main (void)
{
    char agree = get_char("Do you agree? (y/n) ");
    if (agree == 'y' || agree == 'Y')
    {
        printf("You have agreed.\n");
    }
    else if (agree == 'n' || agree == 'N')
    {
        printf("You have not agreed.\n");
    }
    else
    {
        printf("You did not enter a valid character.\n");
    }
}