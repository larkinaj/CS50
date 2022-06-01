#include <cs50.h>
#include <stdio.h>

long get_cardinput(void);
int get_length(long cardinput);
bool get_amex(long cardinput, int length);

int get_luhn(long cardinput, int length);


int main(void)
{
    long cardinput = get_cardinput();

    int length = get_length(cardinput);

    bool amex = get_amex(cardinput, length);

    int luhn = get_luhn(cardinput, length);

    if (amex == true)
    {
        printf("truesey\n");
    }
    else
    {
        printf("falsey\n");
    }



    printf("Length: %i\n", length);

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


bool get_amex(long cardinput, int length)
{
    bool amex;
    if (length == 15 && cardinput % 1000000000000000 / 10000000000000 == 34)
    {
        amex = true;
    }
    else
    {
        amex = false;
    }
    return amex;
}


int get_length(long cardinput)
{
    int length = 0;
    while(cardinput > 0)
    {
        cardinput = cardinput / 10;
        length++;
    }
    return length;
}

int get_luhn(long cardinput, int length)
{
    int luhn = 0;
    return luhn;
}