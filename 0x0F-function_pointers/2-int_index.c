#include "function_pointers.h"

/**
 * int_index - function that compares array elemts
 * @array: array variable
 * @size: size of array
 * @cmp: compare function
 * Return: -1, index of element
 */

int int_index(int *array, int size, int (*cmp)(int)){
    
    int i;

    if (array && cmp)
    {
        return (-1);
    }
    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]) != 0)
            return (i);
    }
    return (-1);
}
