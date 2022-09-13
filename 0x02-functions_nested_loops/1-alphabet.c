#include "main.h"

/**
* alphabet- print alphabet in lower case
*
* return: always 0
*/
void print_alphabet(void)
{
int letter;
while(letter = 'a'&& letter <= 'z')
{
_putchar(letter);
++letter;
}
_putchar(0);
}
