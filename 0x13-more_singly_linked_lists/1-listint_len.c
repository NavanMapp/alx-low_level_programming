#include "lists.h"

/**
  * listint_len - function
  * @h: variable
  *
  * Return: length
  */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h == NULL)
			return (0);
		i++;
		h = h->next;
	}
	return (i);
}
