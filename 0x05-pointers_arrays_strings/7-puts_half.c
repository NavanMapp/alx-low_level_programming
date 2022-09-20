#include "main.h"
/**
* puts_half - a function that prints half of a string
* @str: input
* Return: half of input
*/
void puts_half(char *str)
{
int i, len;
i = 0;
while (str[i] != '\0')
i++;
len = i / 2;
if (i % 2 == 1)
len++
while (len < i)
{
_putchar(str[i]);
len++;
}
_putchar('\n');
}
