#include "list.h"

/**
  * listint_len - function
  * @h: variable
  *
  * Return: length
  */

size_t listint_len(const listint_t *h)
{
	int i = 0, len;

	while (h)
	{
		if (h == NULL)
			return (0);
		len = sizeof(h->n);
		i++;
		h = h->next;
	}
	return (len);
}
