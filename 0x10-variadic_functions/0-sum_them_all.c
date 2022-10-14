#include "variadic_functions.h"

/**
 * sum_them_all - function
 * @n: number of integer values
 * Return: sum of integers
 */

int sum_them_all(const unsigned int n, ...)
{
    unsigned int i, sum = 0;
    va_list ap;
    va_start(ap, n);

    for (i = 0; i < n; i++)
    {
        sum += va_arg(ap, const unsigned int);
    }
    va_end (ap);
    return (sum);
}
