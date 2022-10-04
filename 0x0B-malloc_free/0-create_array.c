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
	int i;

	char *s = (*char)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < s[i]; i++)
	{
		s[i] = c;
	}
	return (s);
}
