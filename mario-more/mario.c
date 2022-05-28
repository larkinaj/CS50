#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    // char blocks = '#';

    do
    {
        n = get_int("How tall should the pyramids be? (between 1 and 8): ");
    }
    while (n > 8 || n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}


rowhash = i 

// for (int n; n > 0; n--)

// char hashes = '#'
// char spaces = '.'

// hashup = n

// printf("%c%c", hashes, spaces)


