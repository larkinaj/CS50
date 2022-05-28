#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        // Get height
        n = get_int("How tall should the pyramids be? (between 1 and 8): ");
    }
    // Keep asking for height until an input between 1-8 is given
    while (n > 8 || n < 1);

    // Pyramid ow counter
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}

