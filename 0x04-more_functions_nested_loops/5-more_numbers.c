#include "main.h"

/**
* more_numbers
* Returns: 0
*/
void more_numbers(void)
{
int a, b;
a = 0;
while (a < 10)
{
for (b = 0; b < 15; b++)
{
if (b /10 != 0)
{
_putchar(b % 10 + '0');
}
a++;
_putchar('\n');
}
}
