#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// int main(void)
// {
//     string s = get_string("Enter s: ");
//     string t = s;

//     t[0] = toupper(t[0]);

//     printf("s: %s\n", s);
//     printf("t: %s\n", t);
// }

int main(void)
{
    char *s = get_string("Enter s: ");
    char *t = malloc(strlen(s) + 1);

    // for (int i = 0; i < strlen(s) + 1; i++) {
    //     t[i] = s[i];
    // }

    strcopy(t,s);

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}