#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array, initialized with zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 * Return: yourbite
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < nmemb)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
