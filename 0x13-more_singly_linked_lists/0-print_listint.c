#include "list.h"

/**
  * print_listint - function for printing numbers of node
  * @h: variable
  * Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	int i = 0;
	
	while (h != NULL)
	{
		if (h == NULL)
			return (1);
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
