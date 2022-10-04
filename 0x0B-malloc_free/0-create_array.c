#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - array of characters
 * @size: integer variable
 * @c: chareacter variable
 * Return: null
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < s[i]; i++)
	{
		s[i] = c;
	}
	return (s);
}
