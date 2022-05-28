#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        n = get_int("How tall should the pyramids be? (between 1 and 8): ");
    }
    while (n > 8 || n < 1);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("#" * j);
        }
        printf("\n");
    }
}