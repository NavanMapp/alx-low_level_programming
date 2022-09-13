#include "main.h"
/**
* main - prints the string "_putchar" from a character array
*
* return: always 0(success)
*/

int main(void)
{
char putchar[] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
_putchar(putchar[i]);
}
_putchar('\n');
return (0);
}
