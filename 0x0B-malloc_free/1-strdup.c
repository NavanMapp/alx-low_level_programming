#include "main.h"
#include <string.h>

/**
  * _strdup - duplicates string
  * @str: string variable
  * Return: NULL
  */

char *_strdup(char *str)
{
	int i;

	char *s;

	if (str == NULL)
		return (NULL);
	i = strlen(str);

	s = (char *) malloc(i + 1);
	strcpy(s, str);
	return (s);
	free(s);
}
