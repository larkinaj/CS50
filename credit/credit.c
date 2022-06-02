#include <cs50.h>
#include <stdio.h>

long get_cardinput(void);
int get_length(long cardinput);
bool get_amex(long cardinput, int length);
bool get_mastercard(long cardinput, int length);
bool get_visa(long cardinput, int length);
int get_luhn(long cardinput, int length);


int main(void)
{
    // Getting the card number that the user inputed.
    long cardinput = get_cardinput();

    // Getting the number of digits in the card number.
    int length = get_length(cardinput);

    // Checking if the criteria of the card matches a Mastercard.
    bool mastercard = get_mastercard(cardinput, length);

    // Checking if the criteria of the card matches an Amex.
    bool amex = get_amex(cardinput, length);

    // Checking if the criteria of the card matches a Visa.
    bool visa = get_visa(cardinput, length);

    // Running the card number through Luhn's Algorithm.
    int luhntotal = get_luhn(cardinput, length);

    // Conditional statement to print the card type depending on all the criteria gathered.
    if (mastercard == true && luhntotal % 10 / 1 == 0)
    {
        printf("MASTERCARD\n");
    }
    else if (amex == true && luhntotal % 10 / 1 == 0)
    {
        printf("AMEX\n");
    }
    else if (visa == true && luhntotal % 10 / 1 == 0)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}

// Function to prompt the user for a cardnumber.
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

// Function to calculate the number of the digits the card has.
int get_length(long cardinput)
{
    int length = 0;
    while (cardinput > 0)
    {
        cardinput = cardinput / 10;
        length++;
    }
    return length;
}

// Function to calculate if the card is an Amex using length of digits and the starting numbers of the card.
bool get_amex(long cardinput, int length)
{
    bool amex;
    if (length == 15)
    {
        if (cardinput % 1000000000000000 / 10000000000000 == 34 || cardinput % 1000000000000000 / 10000000000000 == 37)
        {
            amex = true;
        }
        else
        {
            amex = false;
        }
    }
    else
    {
        amex = false;
    }
    return amex;
}

// Function to calculate if the card is a Mastercard using length of digits and the starting numbers of the card.
bool get_mastercard(long cardinput, int length)
{
    bool mastercard;
    if (length == 16)
    {
        if (cardinput % 10000000000000000 / 100000000000000 > 50 && cardinput % 10000000000000000 / 100000000000000 < 56)
        {
            mastercard = true;
        }
        else
        {
            mastercard = false;
        }
    }
    else
    {
        mastercard = false;
    }
    return mastercard;
}

// Function to calculate if the card is a Visa using length of digits and the starting number of the card.
bool get_visa(long cardinput, int length)
{
    bool visa;
    if (length == 13 || length == 16)
    {
        if (cardinput % 10000000000000 / 1000000000000 == 4 || cardinput % 10000000000000000 / 1000000000000000 == 4)
        {
            visa = true;
        }
        else
        {
            visa = false;
        }
    }
    else
    {
        visa = false;
    }
    return visa;
}

// Function to calculate Luhn’s Algorithm.
int get_luhn(long cardinput, int length)
{
    int digit1 = cardinput % 10 / 1;
    int digit2 = cardinput % 100 / 10;
    int digit3 = cardinput % 1000 / 100;
    int digit4 = cardinput % 10000 / 1000;
    int digit5 = cardinput % 100000 / 10000;
    int digit6 = cardinput % 1000000 / 100000;
    int digit7 = cardinput % 10000000 / 1000000;
    int digit8 = cardinput % 100000000 / 10000000;
    int digit9 = cardinput % 1000000000 / 100000000;
    int digit10 = cardinput % 10000000000 / 1000000000;
    int digit11 = cardinput % 100000000000 / 10000000000;
    int digit12 = cardinput % 1000000000000 / 100000000000;
    int digit13 = cardinput % 10000000000000 / 1000000000000;
    int digit14 = cardinput % 100000000000000 / 10000000000000;
    int digit15 = cardinput % 1000000000000000 / 100000000000000;
    int digit16 = cardinput % 10000000000000000 / 1000000000000000;

    int product2 = digit2 * 2 % 100 / 10 + digit2 * 2 % 10 / 1;
    int product4 = digit4 * 2 % 100 / 10 + digit4 * 2 % 10 / 1;
    int product6 = digit6 * 2 % 100 / 10 + digit6 * 2 % 10 / 1;
    int product8 = digit8 * 2 % 100 / 10 + digit8 * 2 % 10 / 1;
    int product10 = digit10 * 2 % 100 / 10 + digit10 * 2 % 10 / 1;
    int product12 = digit12 * 2 % 100 / 10 + digit12 * 2 % 10 / 1;
    int product14 = digit14 * 2 % 100 / 10 + digit14 * 2 % 10 / 1;
    int product16 = digit16 * 2 % 100 / 10 + digit16 * 2 % 10 / 1;

    int sumofdigits1 = product2 + product4 + product6 + product8 + product10 + product12 + product14 + product16;

    int sumofdigits2 = digit1 + digit3 + digit5 + digit7 + digit9 + digit11 + digit13 + digit15;

    int luhntotal = sumofdigits1 + sumofdigits2;

    return luhntotal;
}