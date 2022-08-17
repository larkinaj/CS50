#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    int n = 50;
    int *p = &n;

    printf("Address of %i is %p\n" , n, p);
    printf("%i\n",*p);
}