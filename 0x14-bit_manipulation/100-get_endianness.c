#include "main.h"

/**
 * get_endianness - write a function that checks the endianness
 * Return: 1
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int) *c);
}
