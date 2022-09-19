#include "main.h"

/**
* print_rev - print string in reverse order
* @s: variable
* Return: string in reverse
*/

void print_rev(char *s)
{
int counter = 0, i, n;
for (i = 0; s[i] != '\0'; i++)
{
counter++;
}
for (n = counter - 1); n >= 0; n--)
{
_putchar(s[n]);
}
_putchar('\n');
}