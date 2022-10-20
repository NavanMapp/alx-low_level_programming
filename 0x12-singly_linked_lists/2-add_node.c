// #include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for alx  project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

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

int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&head, "Alexandro");
    add_node(&head, "Asaia");
    add_node(&head, "Augustin");
    add_node(&head, "Bennett");
    add_node(&head, "Bilal");
    add_node(&head, "Chandler");
    add_node(&head, "Damian");
    add_node(&head, "Daniel");
    add_node(&head, "Dora");
    add_node(&head, "Electra");
    add_node(&head, "Gloria");
    add_node(&head, "Joe");
    add_node(&head, "John");
    add_node(&head, "John");
    add_node(&head, "Josquin");
    add_node(&head, "Kris");
    add_node(&head, "Marine");
    add_node(&head, "Mason");
    add_node(&head, "Praylin");
    add_node(&head, "Rick");
    add_node(&head, "Rick");
    add_node(&head, "Rona");
    add_node(&head, "Siphan");
    add_node(&head, "Sravanthi");
    add_node(&head, "Steven");
    add_node(&head, "Tasneem");
    add_node(&head, "William");
    add_node(&head, "Zee");
    print_list(head);
    return (0);
}