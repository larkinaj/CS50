#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// int atoi(string key);

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
    printf("New int: %i", atoi(argv[1]))
}

// int atoi(string key)
// {
//     int digit;
//     digit = atoi(key);
//     return digit;
// }
