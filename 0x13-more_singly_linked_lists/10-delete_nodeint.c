#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index index of a listint_t linked list
 * @head: pointer variable
 * @index: pointer variable
 * Return: -1 or 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *copy = *head, *tmp;
    unsigned int n = 0;

    if (copy == NULL)
        return (-1);
    if (index == 0)
    {
        *head = (*head)->next;
        free(copy);
        return(1);
    }

    while (n < (index - 1))
    {
        if (copy-next == NULL)
            return (-1);
        copy = copy->next;
    }

    tmp = copy->next;
    copy->next = tmp->next;
    free(tmp);
    return (1);
}
