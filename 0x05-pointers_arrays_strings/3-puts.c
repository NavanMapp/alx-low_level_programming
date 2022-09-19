#include "main.h"

/**
* _puts - prints string
* @str: string input
* Description: prints a string
* On success: returns no error
*/

void _puts(char *str)
{
int i = 0;
while (*(str[i]) != '\0')
{
_putchar(*(str + i));
i++
}
_putchar(10);
}
