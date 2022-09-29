#include "main.h"

/**
* _puts_recursion - print a string and a new line
* @s: variable
* Return: 0;
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
return;
print("%c", s);
_puts_recursion(s + 1);
}
