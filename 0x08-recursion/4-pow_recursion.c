#include "main.h"
#include <math.h>
/**
* _pow_recursion - returns value of x to the power of y
* @x: variable
* @y: variable
* Return: 0;
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(pow(x, y - 1)));
}
