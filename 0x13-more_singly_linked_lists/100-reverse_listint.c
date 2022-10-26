#include "lists.h"

/**
 * reverse_listsint - function that returns a reverse linked list
 * @head: variable
 *
 * Return: reversed list
 */

istint_t *reverse_listint(listint_t **head)
{
    listint_t *h = NULL, *n = NULL;

	if (head)
	{
		return (NULL);
	}
	n = NULL;
	
	while ((*head)->next)
	{
		h = (*head)->next;
		(*head)->next = n;
		n = *head;
		*head = h;
	}
	(*head)->next = n;
	return (*head);
}
