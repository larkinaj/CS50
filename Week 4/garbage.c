#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int scores[3]= {1,2,3};
    int s = sizeof(scores);
    //for (int i = 0; i < sizeof(scores); i++) {
    for (int i = 0; i < 3; i++) {
        printf("%i\n", scores[i]);
    }
    printf("size: %i\n", s);
}