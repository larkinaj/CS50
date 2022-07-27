#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");

    draw(height);

}

void draw(int n)
{
    int newHeight = 1;
    if (n == newHeight) {
        printf("done");
    }
    for (int i = 0; i < newHeight; i++) {
        printf("#");
        newHeight ++;
    }
    draw(newHeight);
}
