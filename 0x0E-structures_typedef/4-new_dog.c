#include "main.h"

/**
 * new_dog - function that creates a new dog
 * @name: variable
 * @age: variable
 * @owner: variable
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	if (!name && !age && !owner)
	{
		return (NULL);
	}
	else
	{

