#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

if (x<y)
{
    printf("%i is less than %i\n",x,y);
}
else
{
    printf("%i is NOT less than %i\n",x,y);
}
}