#include "main.h"

/**
* _print_rev_recursion - prints string in reverse using recursion
* @s: string thats gonna be reversed
* Return: 0;
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
