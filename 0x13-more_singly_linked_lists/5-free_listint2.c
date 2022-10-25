#include "list.h"

/**
 * free_list2 - function that frees memory
 * @head: variable
 * Return: NULL
 */

void free_listint2(listint_t **head)
{
    if (head == NULL)
        return;
    while (*head != NULL)
    {
        free(*head);
        free((*head)->next);
    }
    head = NULL;
}
