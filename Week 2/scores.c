#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int scores[3];

    scores[0] = get_int("Score 1: ");
    scores[1] = get_int("Score 2: ");
    scores[2] = get_int("Score 3: ");

    printf("Average: %.2f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}