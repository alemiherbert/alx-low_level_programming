#include "dog.h"
#include <stdlib.h>


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
	if (new == NULL)
		return (NULL);

	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
