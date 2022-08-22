#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int *x = malloc(3 * sizeof(int));

    // for (int i = 0; i < strlen(s) + 1; i++) {
    //     t[i] = s[i];
    // }

    strcpy(t,s);

    if (strlen(t) > 0) {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);
    free(t);
}