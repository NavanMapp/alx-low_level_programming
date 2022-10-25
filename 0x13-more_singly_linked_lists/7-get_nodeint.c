#include "list.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a listint_t linked list
 * @head: pointer variable
 * @index: variable that returns positive value
 * Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int node;

    for (node = 0; node < index; index++)
    {
        if (head == NULL)
            return (NULL);
        head = head->next;
    }
    return (head);
}
