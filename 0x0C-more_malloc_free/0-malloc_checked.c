#include "main.h"

/**
  * malloc_checked - allocates memory
  * @b: unsigned int value
  * Return: 0
  */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
