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
    string cipher = plaintext;
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isalpha(plaintext[i]))
        {
            if (isupper(plaintext[i]))
            {
                cipher[i] = (plaintext[i] + digit - 65) % 26 + 65;
            }
            else if (islower(plaintext[i]))
            {
                cipher[i] = (plaintext[i] + digit - 97) % 26 + 97;
            }
        }
        else
        {
            cipher[i] = plaintext[i];
        }
    }
    return cipher;
}