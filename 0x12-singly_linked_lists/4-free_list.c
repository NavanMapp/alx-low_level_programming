#include "main.h"

/**
 * free_list - frees a node list
 * @head: pointer to the list
 * Return: 0
 */

 void free_list(list_t *head)
 {
     list_t *n, *next;

     if (head)
     {
         n = head;
         next = head->next;

         while (next)
         {
             free(n->str);
             free(n);
             n = next;
             n = n->next;
         }
         free(n->str);
         free(n);
     }
 }