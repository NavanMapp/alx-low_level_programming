#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_rev - print string in reverse order
* @s: variable
* Return: string in reverse
*/
void print_rev(char *s)
{
int len = strlen(s);
while (len--)
putchar(*(s + len));
putchar(10);
}
