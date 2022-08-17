#include <cs50.h>
#include <stdio.h>


int main(void)
{
    string s = "HI!";
    char *x = &s[0];

    printf("Address of %s is: %p\n" , s, s);
    printf("Address of the first char in s is: %p\n",x);
}