#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    typedef struct {
        string name;
        string number;
    }
    person;

    string names[] = {"Carter", "David"};
    string numbers[] = {"+1-617-495-1000", "+1-949-468-2750"};

    for (int i = 0; i < 2; i++) {
        if (strcmp(names[i], "David") == 0) {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}