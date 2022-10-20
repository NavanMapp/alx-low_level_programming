#include "list.h"

/**
 * free_list - frees a node list
 * @head: pointer to the list
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}