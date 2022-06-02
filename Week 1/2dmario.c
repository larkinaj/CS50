#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // For each row
    for (int i=0; i<n; i++)
    {
        // For each column
        for (int c=0; c<n; c++)
        {
            printf("#");
        }
        printf("\n");
    }
}
