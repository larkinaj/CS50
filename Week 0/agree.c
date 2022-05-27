#include <stdio.h>
#include <cs50.h>

int main (void)
{
    string agree = get_string("Do you agree? (yes/no) ");
    if strcmp(agree == "yes" || agree = "Yes")
    {
        printf("You have agreed.\n");
    }
    else if (agree = "n" || agree = "No")
    {
        printf("You have not agreed.\n");
    }
    else
    {
        printf("You did not enter a valid character.\n");
    }
}