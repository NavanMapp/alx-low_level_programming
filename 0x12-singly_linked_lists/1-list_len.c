#include "main.h"

/**
 * list_len - return elements in a linked list
 * @h: variable
 *
 * Return: 0
 */

 size_t list_len(const list_t *h)
 {
     int i = 0;

     while (h)
     {
         i++;
         h = h->next;
     }
     return (i);
 }