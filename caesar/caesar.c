#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    string test = argv[1];
    if (argc == 2)
    {
        for (int i = 0, n = strlen(test); i < n; i++)
        {
            if (isdigit(test[i]))
            {
                return 0;
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

    if (isdigit(argv[1]))
    {
    return 0;
    }
}