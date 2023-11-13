#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Crée une nouvelle structure de type struct dog_t
 * @name: Pointeur vers le nom du chien
 * @age: Âge du chien
 * @owner: Pointeur vers le propriétaire du chien
 *
 * Return: Pointeur vers la nouvelle structure dog_t ou NULL en cas d'échec.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int lowner, lname, i;

	ndog = malloc(sizeof(dog_t));
	if (!(ndog) || !(name) || !(owner))
		return (NULL);
	while (name)
		lname++;
	while (owner)
		lowner++;
	ndog->name = malloc(lname + 1);
	if (ndog->name != NULL)
		return (NULL);
	ndog->owner = malloc(lowner + 1);
	if (ndog->owner != NULL)
		return (NULL);
	for (i = 0; i < lname; i++)
		ndog->name[i] = name[i];
	ndog->name[i] = '\0';
	for (i = 0; i < lowner; i++)
		ndog->owner[i] = owner[i];
	ndog->owner[i] = '\0';
	ndog->age = age;
	return (ndog);
}
