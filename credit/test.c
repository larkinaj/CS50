#include <cs50.h>
#include <stdio.h>


int main(void)
{
    long input = get_long("Number? ");
    long mod = input % 100 % 10;
    printf("Mod: %li\n", mod);
}