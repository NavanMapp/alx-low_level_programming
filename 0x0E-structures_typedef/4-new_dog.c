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
	struct dog_t *new_dog;

	new_dog = maloc(sizeof(struct dog_t));
	if (!new_dog)
	{
		return (NULL);
	}
	else
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
	}
}
