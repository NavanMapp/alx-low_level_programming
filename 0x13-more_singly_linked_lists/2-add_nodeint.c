#include "list.h"

/**
 * add_nodeint - function that adds node at the beggining
 * @head: variable
 * @n: variable for node added
 *
 * Return: node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *node;

    node = malloc(sizeof(listint_t));

    if (node == NULL)
    {
       free(node);
       return (NULL);
    }
    node->n = n;
    node->next = *head;
    *head = node;
    return (node);
}