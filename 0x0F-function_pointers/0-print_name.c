#include <stdio>

/**
 * print_name - function that prints a name
 * @name: char variable
 *
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
    f = name;
    f();
}
