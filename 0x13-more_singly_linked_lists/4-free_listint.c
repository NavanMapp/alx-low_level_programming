#include "list.h"

/**
 * free_listint - function that frees struct
 * @head: variable
 * Return: NULL
 */

void free_listint(listint_t *head)
{
    while (head)
    {
        free(head);
        free(head->next);
    }
}
