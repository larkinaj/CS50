#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char rotate(char c, int n);

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



}

char rotate(char c, int n)
{
    for (int i = 0, n = strlen(key); i < n; i++)
    {
        if (key[i] > 64 && key[i] < 91)
        {
            printf("%c", s[i]+32);
        }
        else if (key[i] > 96 && key[i] < 123)
        {
            printf("%c", s[i]-32);
        }
        else
        {
            printf("%c", key[i]);
        }
    }
    return 0;
}