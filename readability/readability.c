#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string input);
int count_words(string input);
int count_sentences(string input);
float get_grade(int length, int words, int sentences);

int main(void)
{
    string input = get_string("Text: ");
    int length = count_letters(input);
    int words = count_words(input);
    int sentences = count_sentences(input);
    float index = get_grade(length, words, sentences);

    // printf("%i letters\n", length);
    // printf("%i words\n", words);
    // printf("%i Sentences\n", sentences);
    if (index < 0.5)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 15.4)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(index));
    }
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
    int words = 0;
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

int count_sentences(string input)
{
    int sentences = 0;
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (input[i] == '.' || input[i] == '!'|| input[i] == '?')
        {
            sentences ++;
        }
        else
        {
            sentences = sentences + 0;
        }
    }
    return sentences;
}

float get_grade(int length, int words, int sentences)
{

    float index = 0;
    index = 0.0588 * length / words * 100 - 0.296 * sentences / words * 100 - 15.8;
    return index;
}