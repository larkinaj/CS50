#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

bool only_digits(string key);

int main(int argc, string argv[])
{
    string key = argv[1];
    bool onlydigits = only_digits(key);
    if (argc == 2 && onlydigits == true)
    {
        string plaintext = get_string("Plaintext: ");
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int digit;
    digit = atoi(key);
    printf("New int: %i\n", digit);
}

bool only_digits(string key)
{
    bool onlydigits = true;
    for (int i = 0; i < strlen(key); i++)
    {
        if (isdigit(key[i]))
        {
        }
        else
        {
            onlydigits = false;
        }
    }
    return onlydigits;
}
