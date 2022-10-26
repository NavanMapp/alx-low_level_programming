#include "lists.h"

void print_first() __attribute__((constructor));

/**
 * print_first - prints something before main function
 * Return: 0
 */

void print_first()
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}