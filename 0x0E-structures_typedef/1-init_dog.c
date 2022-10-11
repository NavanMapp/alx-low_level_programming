#include "dog.h"

/**
 * init_dog - function that initialises a struct
 * @d: variable for struct
 * @name: struct variable
 * @age: struct variable
 * @owner: struct variable
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
