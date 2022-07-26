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
    int newHeight = n;
    if (n == newHeight) {
        break;
    }
    for (int i = 0; i < n; i++) {
        printf("#\n");
    }
    draw(n);
}
