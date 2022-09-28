#include "main.h"
#include <math.h>

/**
* prime - helper function to is_prime_number
* @a: variable in prime function
* @b: variable in prime function
* Return: 0
*/

int prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime(a, b + 1));
}

/**
* is_prime_number - determines if number is a prime number
* @n: number variable
* Return: 1 if its prime number, 0 if its not
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
