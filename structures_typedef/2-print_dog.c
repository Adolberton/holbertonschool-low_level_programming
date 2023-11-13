#include <stdio.h>
#include <stdlib.h>

#include "dog.h"

/**
 * print_dog - function that initialize a variable of type struct dog
 *
 * @d: pointer to the structur declared in dog.h
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
