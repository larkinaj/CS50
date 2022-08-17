#include <cs50.h>
#include <stdio.h>


int main(void)
{
    string s = "HI!";
    char *p = &s[0];
    char *x = &s;

    printf("Address of %s is: %p\n" , s, x);
    printf("Address of the first char in s is: %s\n",x);
}