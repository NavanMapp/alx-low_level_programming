#include "list.h"

/**
 * list_len - return elements in a linked list
 * @h: variable
 *
 * Return: 0
 */

size_t list_len(const list_t *h)
{
 size_t i = 0;

 while (h)
 {
  h = h->next;
  i++;
 }
 return (i);
}