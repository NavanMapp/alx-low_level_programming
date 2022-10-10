#include "main.h"
#include "dog.h"

/**
 * free_dog - function that free's the dog
 * @d: variable
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner
				free(d);
		}

}
