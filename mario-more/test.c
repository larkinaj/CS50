#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n = get_int("n: ");
    int dots = n - 1;

    if (n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}