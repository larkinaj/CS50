#include <cs50.h>
#include <stdio.h>

long get_cardinput(void);
bool get_amex(long cardinput);

int main(void)
{
    long cardinput = get_cardinput();

    bool get_amex(long cardinput);

    if (bool amex = true)
    {
        printf("truesey")
    }
    else
    {
        printf("falsey")
    }

    //printf("Mod: %li", cardinput);

    // long mod = cardinput % 100 / 10;
    // printf("Mod: %li\n", mod);
}

long get_cardinput(void)
{
    long cardinput;
    do
    {
        cardinput = get_long("What is the card number? ");
    }
    while (cardinput < 0);
    return cardinput;
}


bool get_amex(long cardinput)
{
    bool amex;
    if (cardinput > 130 && cardinput < 140)
    {
        amex = true;
    }
    else
    {
        amex = false;
    }
}