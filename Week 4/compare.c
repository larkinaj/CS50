#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    int i[] = {1};
    int j[] = {1};

    //the below code doesnt work because != and == will only
    //compare the base addresses of those strings. Not the contents of the strings themselves.
    if (i == j) {
        printf("Same\n");
    }
    else {
        printf("Different\n");
    }


    if (strcmp(s, t) == 0) {
        printf("Same\n");
    }
    else {
        printf("Different\n");
    }
}