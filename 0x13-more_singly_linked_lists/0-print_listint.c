#include "list.h"

/**
  * print_listint - function for printing numbers of node
  * @h: variable
  * Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	while (h != NULL)
	{
		printf("%d\n", h->listint_t);
	}
}
