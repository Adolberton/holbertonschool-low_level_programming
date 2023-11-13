#include <stdio.h>
#include <stdlib.h>

#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: pointer to the structur declared in dog.h
 * @name: variable to the name element of the structur
 * @age: variable to the age element of the structur
 * @owner: varialbe to the owner element of the structur
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
