#include "main.h"

/**
* _puts_recursion - print a string and a new line
* @s: variable
* Return: 0;
*/

void _puts_recursion(char *s)
{
int i, len, t;

if (*s)
{
	_putchar("\n");
	return;
}
	_puts_recursion(s);
	_puts_recursion(s + 1);
}
