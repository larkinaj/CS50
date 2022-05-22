#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n = get_int("n: ");

    if (points < MINE)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > MINE)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost the same number as me.\n");
    }
}