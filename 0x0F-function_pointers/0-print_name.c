#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: char variable
 * @f: pointer function
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
    f(name);
}
