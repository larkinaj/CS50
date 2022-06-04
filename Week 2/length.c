#include <stdio.h>
#include <cs50.h>

int get_length(string s);

int main(void)
{
    string name = get_string("Name: ");
    int length = string_length(name);

    printf("%i\n", length);
}



int string_length(string s)
{
    int i = 0;

    while (name[1] != '\0')
    {
        i++;
    }
    return i
}