#include "main.h"

/**
 * array_iterator - array function
 * @array: variable
 * @size_t: variable
 * @@action: pointer function
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i;

    for (i = 0; i < size; i++)
        action(array[i]);
}
