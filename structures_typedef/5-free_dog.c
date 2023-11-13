#include <stdio.h>
#include <stdlib.h>

#include "dog.h"

/**
 * free_dog - function that initialize a variable of type struct dog
 *
 * @d: pointer to the structur declared in dog.h
 *
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
