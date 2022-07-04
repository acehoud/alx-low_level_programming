#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
				d->name == NULL ? "(nil)" : d->name,
				d->age,
				d->owner == NULL ? "(nil)" : d->owner);
	}
}
