#include <stdio.h>
#include <stdlib.h>

// int main(void)
// {
//     int *list = malloc(3 * sizeof(int));

//     list[0] = 1;
//     list[1] = 2;
//     list[2] = 3;

//     int *tmp = realloc(list, 4 * sizeof(int));

//     tmp[3] = 4;

//     list = tmp;

//     for (int i = 0; i < 4; i++)
//     {
//         printf("%i\n", list[i]);
//     }

//     free(list);
// }

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    // list of size 0
    node *list = NULL;

    // add a number to list
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 1;
    n->next = NULL;

    // Update list to point to new node
    list = n;

    // add a number to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(list);
        return 1;
    }
    n->number = 2;
    n->next = NULL;
    list ->next = n;

    // add a number to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(list->next);
        free(list);
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    list ->next->next = n;

    // print numbers
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number);
    }

    //free list
    while (list != NULL)
    {
        node *tmp = list -> next;
        free(list);
        list = tmp;
    }
    return 0;
}