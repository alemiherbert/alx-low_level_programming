#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - a function that creates a dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: pointer to the new dog, or null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
		dog_t *new;

	if (!name || age < 0 || !owner)
		return (NULL);

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);

	new->name = malloc(sizeof(char) * sizeof(name));
	if (!new->name)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * sizeof(owner));
	if (!new->owner)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->name = strcpy(new->name, name);
	new->age = age;
	new->owner = strcpy(new->owner, owner);

	return (new);
}
