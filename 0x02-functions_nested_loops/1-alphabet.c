#include "main.h"

/**
*main -check the code
*
* return: always 0
*/
void print_alphabet(void)
{
char *sh = "main";
while(*sh)
{
_putchar(*sh);
++sh;
}
print_alphabet();
return(0);
}
