#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    if (strcmp(s, t) == 0) {
        printf("Same\n");
    }
    else {
        printf("Different\n");
    }

    printf("%s\n", s);
    printf("%s\n", t);

    //the below code will check the point values of two ints that are of equal value
    //int s = 5;
    //int t = 5;
    //printf("%p\n", &s);
    //printf("%p\n", &t);

    //the below code doesnt work because != and == will only
    //compare the base addresses of those strings. Not the contents of the strings themselves.
    // if (s == t) {
    //     printf("Same\n");
    // }
    // else {
    //     printf("Different\n");
    // }
}