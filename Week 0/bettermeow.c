#include <stdio.h>

int meow(int n);

int main(void)
{
    meow(3);
}

int meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        return i;
        printf("meow\n");
    }
}