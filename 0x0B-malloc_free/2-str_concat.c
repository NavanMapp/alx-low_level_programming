#include "main.h"
#include <string.h>

/**
  * str_concat - concatenates strings
  * @s1: string 1
  * @s2: string 2
  * Return: NULL
  */

char *str_concat(char *s1, char *s2)
{
	int i, j = 0, k = 0;

	char *s3 = NULL;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] || s2[i]; i++)
		k++;

	s3 = malloc(sizeof(char) * k);

	if (s3 == NULL)
		return (NULL);
	
	for (i = 0; s1[i]; i++)
	{
		s3[j++] = s1[i];
	}

	for (i = 0; s2[i]; i++)
	{
		s3[j++] = s2[i];
	}
	return (s3);
}
