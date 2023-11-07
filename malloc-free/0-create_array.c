#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Entry point
 *@size: size of the array
 *@c: character
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = NULL;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	for (i = 0 ; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
