#include "main.h"
/**
*main - entry point
* return: always 0(success)
*/
int main(void)
{
char putchar[] = "_putchar";
for (int i=0; i<9; i++)
{
_putchar(putchar[i]);
}
_putchar('\n');
return (0);
}
