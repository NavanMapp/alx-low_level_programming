#include "variadic_funcitons.h"

/**
 * print_numbers - function that print numbers
 * @seperator: variable
 * @n: variable
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    char *sep;
    unsigned int i;
    va_list ap;

    if (!separator || *separator == 0)
        return;
    else
        sep = (char *) separator;

    va_start(ap, n);

    if (n > 0)
        printf("%d", va_arg(ap, int));
    for (i = 1; i < n; i++)
        printf("%s%d", sep, va_arg(ap, int));
    printf("\n");
    va_end(ap);
}
