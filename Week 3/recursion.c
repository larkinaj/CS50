#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int draw(int n);

int main(void)
{
    int height = get_int("Height: ");

    draw(height);

}

int draw(int n)
{
    int newHeight = n;
    if (n == newHeight) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        printf("#\n");
    }
    draw(n);
}
