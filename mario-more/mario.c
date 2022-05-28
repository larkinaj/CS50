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
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                
            }
            printf("#");
        }
        printf("\n");
    }
}



