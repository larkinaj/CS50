#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int scores[3];
    int s = sizeof(scores)/sizeof(scores[0]);

    for (int i = 0; i < sizeof(scores)/sizeof(scores[0]); i++) {
        printf("%i\n", scores[i]);
    }
    
    printf("size: %i\n", s);
}