#include "main.h"

/**
* print_sign: function that prints a sign of a number
* @n: is the int that will use the argument of the function
* Return: 0, 1 and -1 will be returned
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
_putchar('-');
return (-1);
}
