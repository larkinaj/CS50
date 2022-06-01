#include <cs50.h>
#include <stdio.h>

long get_cardinput(void);

int main(void)
{
    long cardinput = get_cardinput();


    void get_amex();
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


void get_amex(long cardinput)
{
    if (cardinput > 130 && cardinput < 140)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}