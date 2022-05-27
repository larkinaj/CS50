#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    float amount = get_float("Dollar amount: ");
    float pennies = round(amount * 100);

    printf("Pennies: %f\n", pennies);
}