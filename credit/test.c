#include <cs50.h>
#include <stdio.h>

int get_cardinput(void);

int main(void)
{
    long cardinput = get_cardinput();

    long mod = cardinput % 100 / 10;
    printf("Mod: %li\n", mod);
}

int get_cardinput(void)
{
    int cardinput;
    do
    {
        cardinput = get_long("What is the card number? ");
    }
    while (cardinput < 0);
    return cardinput;
}