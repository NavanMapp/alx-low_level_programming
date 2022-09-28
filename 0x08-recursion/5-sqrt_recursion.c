#include "main.h"
#include <math.h>

/**
* _sqrt_recursion - function for square root
* @n: number variable
* Return: -1 if not natural square root, answer if square root found
*/

int _sqrt_recursion(int n)
{
	if (sqrt(n) != 0)
		return (-1);
	return (
