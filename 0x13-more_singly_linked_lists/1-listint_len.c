#include "list.h"

size_t listint_len(const listint_t *h)
{
    int i = 0, len;

    while (h)
    {
        if (h == NULL)
        return (0);
        len = sizeof(h->n);
        i++;
        h = h->next;
    }
    return (len);
}

int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = listint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}