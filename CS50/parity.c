#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n = get_int("n: ");

    if (n < MINE)
    {
        printf("even\n");
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