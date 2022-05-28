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
}