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
        for (int j = 1; j <= i; j++)
        {
            dots = n - i;
            if dots >= 0
            {
                printf(".");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}



// int dots = n - i

// char hashes = '#'
// char spaces = '.'

// hashup = n

// printf("%c%c", hashes, spaces)


