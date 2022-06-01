#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int input = get_long("Number? ");
    int mod = input % 10;
    printf("Mod: %i\n", mod);
}