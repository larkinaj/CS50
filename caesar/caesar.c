#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc < 2 || argc > 2)
    {
        printf("Usage: ./caesar key\n");
    }
    else if (isalpha(argv[1]))
    {
        string test = get_string("Plaintext: ");
    }
    else
    {
        printf("Usage: ./caesar key\n");
    }
}