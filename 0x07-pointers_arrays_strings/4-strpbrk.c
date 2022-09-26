#include "main.h"

/**
* strpbrk - searches for any set of bytes
* @s: pointer that contains the address of the string to be evaluated
* @accept: pointer that contains a string
* Return: address of the first occurrence of accept in the string
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != 0)
	{
		for (i = 0; accept[i] != 0; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
