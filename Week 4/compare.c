#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char *i = get_string("i: ");
    char *j = get_string("j: ");
    
    // the below code doesnt work because
    // if (i == j) {
    //     printf("Same\n");
    // }
    // else {
    //     printf("Different\n");
    // }

    if (strcmp(i, j) == 0) {
        printf("Same\n");
    }
    else {
        printf("Different\n");
    }
}