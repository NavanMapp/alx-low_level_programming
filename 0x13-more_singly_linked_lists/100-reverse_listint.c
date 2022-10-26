#include "lists.h"

/**
 * reverse_listsint - function that returns a reverse linked list
 * @head: variable
 *
 * Return: reversed list
 */

istint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL, *next = NULL;

	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = prev;
			prev = next;
		}
		*head = prev;
		return (*head);
	}
	return (NULL);
}
