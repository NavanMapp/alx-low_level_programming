#include "main.h"

/**
 * print_list - struct that prints a list of elements
 * @h: variable
 *
 * Return: 0
 */

size_t print_list(const list_t *h)
{
     unsigned int i = 0;

     while (h)
     {
         if (h->str == NULL)
         {
             printf("[0] Nil\n");
         }
         printf("[%d] %s\n", h->len, h->str);
         i++;
         h = h->next;
     }
     return (i);
}