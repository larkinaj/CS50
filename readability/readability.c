#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_letters(string input);

int main(void)
{
    string input = get_string("Text: ");
    int length = count_letters(input);
}

int count_letters(string input)
{
    for (int length = 0, n = strlen(input); length < n; length++)
    {
        return length;
    }
}