#include "main.h"

/**
* _print_rev_recursion - prints string in reverse using recursion
* Return: 0;
*/

void _print_rev_recursion(char *s)
{
	int i;

	if (s[i] != NULL)
	{
		printf("%s\n", strrev(s));
	}
}
