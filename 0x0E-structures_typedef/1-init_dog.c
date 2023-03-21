#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: the dog
 * @name: the dog's name
 * @age: the dogs's age
 * @owner: the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
