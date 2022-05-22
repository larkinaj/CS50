#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

if (x<y)
{
    printf("%i is less than y\n",x);
}
else
{
    printf("%i is NOT less than y\n",x);
}
}