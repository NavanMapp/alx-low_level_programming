#include "main.h"
#include <math.h>

/**
* sqrt2 - helper function
* @a: variable
* @b: variable
* Return: 0;
*/

int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

/**
* _sqrt_recursion - function for square root
* @n: number variable
* Return: -1 if not natural square root, answer if square root found
*/

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
