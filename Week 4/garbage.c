#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int scores[3];
    for (int i = 0; i < sizeof(scores); i++) {
        printf("%i\n", scores[i]);
    }
}