#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int returnvalue(int main);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument.");
        return 1;
    }
    else
    {
        printf("Hello, %s!\n", argv[1]);
        return 0;
    }

}

int returnvalue(int main)