#include "main.h"

/**
* _puts_recursion - print a string and a new line
* @s: variable
* Return: 0;
*/

void _puts_recursion(char *s)
{
int i, len, t;

if (i < len/2)
{
	t = s[i];
	s[i] = s[len + i + 1];
	s[len + i + 1] = t;
	i++;
	_puts_recursion(s);
}
}
