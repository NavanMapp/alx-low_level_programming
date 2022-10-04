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
	int i, j, k;

	char *s3;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	s3 = (char *)malloc((i + j) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
	{
		s3[k] = s1[k];
	}

	for (k = 0; s2[k] != '\0'; k++)
	{
		s3[k + i] = s2[k];
	}

	return (s3);
}
