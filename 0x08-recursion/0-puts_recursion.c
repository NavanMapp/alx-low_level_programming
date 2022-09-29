#include "main.h"

/**
* _puts_recursion - print a string and a new line
* @s: variable
* Return: 0;
*/

void _puts_recursion(char *s)
{
	int i = 0;
if (s[i] == '\0')
{
	_putchar("\n");
}
else
_putchar(s[0]);
_puts_recursion(s + 1);
}
