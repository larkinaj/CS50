#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


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
    
}