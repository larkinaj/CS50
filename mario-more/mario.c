#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    // char blocks = '#';
    int test;

    do
    {
        n = get_int("How tall should the pyramids be? (between 1 and 8): ");
    }
    while (n > 8 || n < 1);

    for (int i = 0; i < n; i++)
    {
        test = n - n + 1;
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}


