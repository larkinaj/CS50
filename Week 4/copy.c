#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

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

    strcpy(t,s);

    if (strlen(t) > 0) {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);
    free(t);
}