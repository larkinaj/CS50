#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_letters(string input);

int main(void)
{
    string input = get_string("Text: ");
    int length = count_letters(input);
    printf("Length: %i\n", length);
}

int count_letters(string input)
{
    
    for (int length = 0, n = strlen(input); length < n; length++)
    {
        printf("%c", input[n]);
    }
    return length;
}