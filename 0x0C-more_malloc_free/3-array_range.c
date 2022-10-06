#include "main.h"

/**
  * array_range - array of integers
  * @min: minimum number of integer array
  * @max: maximum number of integer array
  * Return: NULL or allocated memory
  */

int *array_range(int min, int max)
{
	int i, l, *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;

	a = malloc(sizeof(int) * l);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
