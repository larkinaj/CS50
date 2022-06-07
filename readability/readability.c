#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_letters(string input);

int main(void)
{
    string input = get_string("Text: ");
    int length = count_letters(input);
    printf("%i letters\n", length);
}

int count_letters(string input)
{
    int length = strlen(input);

    for int i = 0, n = strlen(input); i >

}