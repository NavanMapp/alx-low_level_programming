#include "main.h"

/**
 * get_bit - function that returns the value of a bit at the given index
 * @n: value in the index
 * @index: index of bit
 * Return: int value
 */

int get_bit(unsigned long int n, unsigned int index)
{
    if (index > 63)
        return (-1);
    if (index == 0)
    {
        return (n & 1);
    }
    return (get_bit(n >> 1, index - 1));
}
