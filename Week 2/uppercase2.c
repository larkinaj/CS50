#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] > 64 && s[i] < 91)
        {
            printf("%c", s[i]+32);
        }
        else if (s[i] > 96 && s[i] < 123)
        {
            printf("%c", s[i]-32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}