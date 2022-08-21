#include <cs50.h>
#include <stdio.h>


int main(void)
{
    string s = "HI!";
    char *x = &s[0];

    printf("Address of %s is: %p\n" , s, s);
    printf("Address of the first char in s is: %p\n",&s[0]);
    printf("Address of the second char in s is: %p\n",&s[1]);
    printf("Address of the third char in s is: %p\n",&s[2]);
    printf("Address of the fourth char in s is: %p\n",&s[3]);

}