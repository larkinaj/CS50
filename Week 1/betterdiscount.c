#include <stdio.h>
#include <cs50.h>

float discount(float price);

int main (void)
{
    float regular = get_float("Regular Price: ");
    float sale = discount(regular);
    printf("Sale Price: %.2f\n", sale);
}



float discount(float price)
{
    float sale2 = price * .85;
    return sale2;
}