#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: variable
 * @age: variable
 * @owner: variable
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *_dog;
	
	_dog = malloc(sizeof(struct dog_t));
	if (_dog == NULL)
		return (NULL);
	_dog->name = name;
	_dog->age = age;
	_dog->owner = owner;
	return (_dog);
}
