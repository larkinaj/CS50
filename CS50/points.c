#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int points = get_int("How many points did you lose? ");

    if (points < 2)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > 2)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost the same number as me.\n");
    }
}