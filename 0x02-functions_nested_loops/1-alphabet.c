#include "main.h"
/**
* print_alphabet - for function print_alphabet in lower case
* Return: always 0
*/
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
