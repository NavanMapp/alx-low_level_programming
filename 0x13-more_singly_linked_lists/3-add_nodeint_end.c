#include "lists.h"

/** dd_nodeint_end - function that adds a node at the end
 * @head: variable
 * @n: variable
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *node, *end;
    
    if (head)
    {
    node = malloc(sizeof(listint_t));

    if (node == NULL)
    {
        return (NULL);
    }

    node->n = n;
    node->next = NULL;

    if (*head == NULL)
    {
        *head = node;
        return (*head);
    }
    else
    {
        end = *head;
        while (end->next != NULL)
            end = end->next;
        end->next = node;
        return (end);
    }
    }
    return (NULL);
}
