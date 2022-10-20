#include "list.h"

/**
 * print_list - struct that prints a list of elements
 * @h: variable
 *
 * Return: 0
 */

size_t print_list(const list_t *h)
{
     size_t i = 0;

     while (h)
     {
         if (h->str == NULL)
         {
             printf("[0] nil\n");
         }
         printf("[%d] %s\n", h->len, h->str);
         h = h->next;
         i++;
     }
     return (i);
}