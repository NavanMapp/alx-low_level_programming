#include "main.h"

/**
* main -  print 10x the alphabet
*
* Return - always 0
*
*/

void print_alphabet_10x(void)
{
  int i;
  for (i = 0; i < 10; ++i)
    {
      char c;
      for (c = 'a'; c <= 'z'; c++)
	{
	  _putchar(c);
	}
    }
  _putchar('\n');
}
