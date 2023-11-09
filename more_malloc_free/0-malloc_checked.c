#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Alloue de la mémoire et vérifie l'allocation.
 * @b: Taille de la mémoire à allouer.
 *
 * Return: Un pointeur vers la mémoire allouée.
 * Si l'allocation échoue, termine le programme avec le code d'erreur 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
