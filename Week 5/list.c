#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    // int list[3];

    // list[0] = 1;
    // list[1] = 2;
    // list[2] = 3;

    int *list = malloc(3 * sizeof(int));

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = realloc(list, 4 * sizeof(int));

    tmp[3] = 4;

    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);
}