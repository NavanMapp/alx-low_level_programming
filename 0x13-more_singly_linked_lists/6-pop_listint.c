#include "list.h"

/**
 * pop_listint - Deletes the head node
 * @head: variable
 * Return: deletion of node
 */

int pop_listint(listint_t **head)
{
    listint_t *tmp;
    int node;

    if (*head == NULL)
        return (0);
    tmp = *head;
    node = (*head)->n;
    *head = (*head)->next;

    free(tmp);
    return (node);
}
