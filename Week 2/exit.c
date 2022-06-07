#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument. Return code: %i\n", main);
        return 1;
    }
    else
    {
        printf("Hello, %s!\n", argv[1]);
        return 0;
    }

}