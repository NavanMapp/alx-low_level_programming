#include "variadic_functions.h"

/**
 * sum_them_all - function
 * @n: number of integer values
 * Return: sum of integers
 */

int sum_them_all(const unsigned int n, ...)
{
    int i, sum;
    va_list ap;
    va_start(ap, n);

    sum = 0;
    for (i = 0; i < n; i++)
        sum += va_arg (ap, int);
    va_end (ap);
    return (sum);
}
