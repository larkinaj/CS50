#include <stdio.h>
#include <cs50.h>

int main (void)
{
    string agree = get_string("Do you agree? ");
    if (agree == 'y')
    {
        printf("You have agreed.\n");
    }
}