#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_letters(string input);
int count_words(string input);

int main(void)
{
    string input = get_string("Text: ");
    int length = count_letters(input);
    int words = count_words(input);
    printf("%i letters\n", length);
    printf("%i words\n", words);
}

int count_letters(string input)
{
    int length = 0;
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (isalpha(input[i]))
        {
            length ++;
        }
        else
        {
            length = length + 0;
        }
    }
    return length;
}

int count_words(string input)
{
    int words;
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (isspace(input[i]))
        {
            words ++;
        }
        else
        {
            words = words + 0;
        }
    }
    words ++;
    return words;
}