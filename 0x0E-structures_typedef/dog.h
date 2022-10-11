#include <stdio.h>

/**
 * dog - struct definition
 * dog_t - struct variable
 * @name: variable
 * @age: variable
 * @owner: variable of struct
 * Return: 0
 */

struct dog {
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
