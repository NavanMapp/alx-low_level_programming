#include "main.h"

/**
  * string_nconcat - concatenate string
  * @s1: string 1
  * @s2: string 2
  * @n: number value
  * Return: NULL
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s[i]; i++)
			;
	}

	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}

	if (n < j)
		j = n;

	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';

	return (s);
}
