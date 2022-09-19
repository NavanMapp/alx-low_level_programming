#include "main.h"
#include <stdio.h>

/**
* _strlen - function that returns string length
* @s: variable
* Return: string length
*/

void _strlen(char *s)
{
int i = 1, len = 0;
char str = s[0];
while (str != '\0')
{
len++;
str = s[i++];
}
return (len);
}
