#include <stdio.h>
#include <cs50.h>

int main (void)
{
    string agree = get_string("Do you agree? ");
    if (agree == get_string("y"))
    {
        printf("You have agreed.\n");
    }
}