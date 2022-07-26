#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    int height = get_int("Height: ");

    draw(height);

}

void draw(int n)
{
    for (int i = 0; i < n; i++) {
        
    }
}

    for (int i = 1; i <= 7; i++) {
        if (strcmp(names[i], "Ron") == 0) {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
