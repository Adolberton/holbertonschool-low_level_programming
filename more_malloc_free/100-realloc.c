#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _realloc - nique
 * @ptr: les
 * @old_size: descriptions
 * @new_size: srx
 * Return: ras le cul
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	old_ptr = ptr;
	for (i = 0; i < old_size; i++)
		new_ptr[i] = old_ptr[i];
	free(ptr);
	return (new_ptr);
}

