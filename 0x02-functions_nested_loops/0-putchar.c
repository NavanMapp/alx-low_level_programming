#include "main.h"

/**
* main - print putchar
* Return: 0
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
