#include <cs50.h>
#include <stdio.h>

long get_cardinput(void);
int get_length(long cardinput);

int main(void)
{
    long cardinput = get_cardinput();

    int get_length(cardinput);

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



int get_length(long cardinput)
{
    for(int length = 0; cardinput / 10; length++)
    {
        printf("%i", length)
    }
}