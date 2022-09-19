#include "main.h"

/**
* swap_int - swaps two integers
* @a: variable 1
* @b: variable 2
* Return: integers
*/

void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
