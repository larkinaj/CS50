#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string input);
int count_words(string input);
int count_sentences(string input);
float get_index(int length, int words, int sentences);

int main(void)
{
    string input = get_string("Text: ");
    int length = count_letters(input);
    int words = count_words(input);
    int sentences = count_sentences(input);
    float grade = get_index(length, words, sentences);

    // Conditional statement to determine whether the reading level is less than 1 or greater than 15.
    if (grade < 0.5)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 15.4)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(grade));
    }
}

// Function to count the number of letters in the text.
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

// Function to count the number of words in the text.
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

// Function to count the number of sentences in the text.
int count_sentences(string input)
{
    int sentences = 0;
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (input[i] == '.' || input[i] == '!' || input[i] == '?')
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

//Function to calculate the reading level using the Coleman-Liau index.
float get_index(int length, int words, int sentences)
{
    float grade = 0.0588 * length / words * 100 - 0.296 * sentences / words * 100 - 15.8;
    return grade;
}