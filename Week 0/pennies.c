#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float amount = get_float("Dollar amount: ");
    int pennies = amount * 100;

    printf("Pennies: %.50i\n", pennies);
}