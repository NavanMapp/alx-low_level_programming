#include "main.h"

/**
 * strdup - function to duplicate string
 * @src: source of char
 */

char *strdup(const char *src)
{
    char *dst = malloc(strlen (src) + 1);
    if (dst == NULL)
    return NULL;
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
 * add_node_end - function that adds node at the end of the list
 * @head: variable
 * @str: variable
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *n, *h = *head;

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
	n->next = NULL;

	if (h)
	{
	    while (h->next)
	    h = h->next;
	    h->next = n;
	}
	else
	*head = n;
	return (n);
}