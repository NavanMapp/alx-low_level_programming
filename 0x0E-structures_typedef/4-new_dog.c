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
	dog_t *_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		_dog = malloc(sizeof(dog_t));

		if (_dog == NULL)
			return (NULL);

		_dog->name = malloc(sizeof(char) * name_l);

		if (_dog->name == NULL)
		{
			free(_dog);
			return (NULL);
		}

		_dog->owner = malloc(sizeof(char) * own_l);

		if (_dog->owner == NULL)
		{
			free(_dog->name);
			free(_dog);
			return (NULL);
		}

		_dog->name = _strcpy(_dog->name, name);
		_dog->owner = _strcpy(_dog->owner, owner);
		_dog->age = age;
	}

	return (_dog);
}
