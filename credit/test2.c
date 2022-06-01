#include <cs50.h>
#include <stdio.h>

long get_cardinput(void);
bool get_amex(long cardinput);
int get_length(long cardinput);

int main(void)
{
    long cardinput = get_long("Number? ");

    long mod = cardinput % 1000000000000000 / 10000000000000;
    printf("Mod: %li\n", mod);
}