#include "main.h"

/*
* print_most_numbers - checks for digits 0 to 9
* Return: 0
*/
void print_most_numbers(void)
{

int i;
for (i = 48; i < 58; i++)
{
if (i != 50)
{
if (i != 52)
{
_putchar(i);
}
}
}
_putchar('\n');
}