#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    int dots;

    // char hashes = '#';

    do
    {
        n = get_int("How tall should the pyramids be? (between 1 and 8): ");
    }
    while (n > 8 || n < 1);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            printf(".");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}



// int dots = n - i

// char hashes = '#'
// char spaces = '.'

// hashup = n

// printf("%c%c", hashes, spaces)


