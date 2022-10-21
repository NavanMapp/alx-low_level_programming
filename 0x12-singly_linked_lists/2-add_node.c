#include "list.h"

/**
 * print_list - struct that prints a list of elements
 * @h: variable
 *
 * Return: 0
 */

size_t print_list(const list_t *h)
{
     size_t i = 0

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

/**
 * strdup - function to duplicate string
 * @src: source of char
 */

char *strdup(const char *src)
{
    char *dst = malloc(strlen (src) + 1);
    if (dst == NULL) return NULL;
    strcpy(dst, src);
    return dst;
}

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string.
 * Return: length of @s.
 */

int _strlen_recursion(char *s)
{
    if (*s == 0)
    return (0);
    else
    return (1 + _strlen_recursion(s + 1));
}

/**
 * add_node - function that adds a new node
 * @head: variable
 * @str: variable
 *
 * the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n = NULL;

	n = malloc(sizeof(list_t));
	if (n == NULL)
	{
		return (NULL);
	}

	n->str = strdup(str);
	if (!n->str)
	{
		free(n);
		return (NULL);
	}
	n->len = _strlen_recursion(n->str);
	n->next = *head;
	*head = n;

	return (n);
}