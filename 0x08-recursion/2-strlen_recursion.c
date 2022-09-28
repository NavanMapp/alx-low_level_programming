#include "main.h"

/**
* _strlen_recursion - determines string length using recursion
* @s: string variable
* Return: 0;
*/

int _strlen_recursion(char *s)
{
	int len;
	
	len = strlen(s);
	if (*s)
		_strlen_recursion(s + 1);
	return (len);
}
