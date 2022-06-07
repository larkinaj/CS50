#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

string rotate(int digit, string plaintext);

int main(int argc, string argv[])
{
    string key = argv[1];
    if (argc == 2)
    {
        for (int i = 0; i < strlen(key); i++)
        {
            if (isdigit(key[i]))
            {
            }
            else
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int digit;
    digit = atoi(key);
    printf("New int: %i\n", digit);
    string plaintext = get_string("Plaintext: ");
    string cipher = rotate(digit, plaintext);
    printf("Cipher: %s\n", cipher);


}

string rotate(int digit, string plaintext)
{
    string cipher = key;
    for (int i = 0, n = strlen(key); i < n; i++)
    {
        if (isalpha(key[i]))
        {
            cipher[i] = key[i] + 32;
        }
        else if (key[i] > 96 && key[i] < 123)
        {
            cipher[i] = key[i] - 32;
        }
        else
        {
            cipher[i] = key[i];
        }
    }
    return cipher;
}