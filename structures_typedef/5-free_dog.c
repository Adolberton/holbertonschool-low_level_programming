#include <stdio.h>
#include <stdlib.h>

#include "dog.h"

/**
 * free_dog - frees dogs.
 * @d: struct dog.
 *
 * Return: no return.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
