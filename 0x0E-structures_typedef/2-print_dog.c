#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print a dogs info
 * @d: pointer to the dog
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL ? "(nil)" : d->name));
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL ? "(nil)" : d->owner));
	}
}
