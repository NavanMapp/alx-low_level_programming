#include "variadic_functions.h"

/**
 * print_strings - Entry Point
 * @separator: comma space
 * @n: number of elements
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *p;
	unsigned int i;
	va_list list;

	if (!separator || *separator == 0)
		return;
	else
		sep = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%s", va_arg(list, char *));
	for (i = 1; i < n; i++)
	{
		p = va_arg(list, char*);
		if (!p)
			p = "(nil)";
		printf("%s%s", sep, p);
	}
	printf("\n");
	va_end(list);
}
