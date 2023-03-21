#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print a dogs info
 * @d: pointer to the dog
 *
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	d->age ? printf("Age: %f\n", d->age) : printf("Age: (nil)\n");
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
