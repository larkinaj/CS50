#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float x = get_int("x: ");
    float y = get_int("y: ");
    float z = x / y;


    printf("%f\n", z);
}