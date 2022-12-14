#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 * @head: variable
 * @idx: index of listint_t
 * @n: new node
 * Return: New node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new, *copy = *head;
    unsigned int node = 0;

    new =malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;

    if (idx == 0)
    {
        new->next = copy;
        *head = new;
        return (new);
    }

    while (node < (idx - 1))
    {
        if (copy == NULL || copy->next == NULL)
            return (NULL);
        copy = copy->next;
        node++;
    }

    new->next = copy->next;
    copy->next = new;
    return (new);
}
