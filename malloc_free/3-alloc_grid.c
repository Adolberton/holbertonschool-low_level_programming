#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Concatenates two strings
 * @width: mabite
 * @height: sqdfsq
 * Return: returns the concatenated string
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	int i, j;
	int **fk;

	fk = malloc(height * sizeof(int));

	if (fk == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		fk[i] = malloc(width * sizeof(int));

		if (fk[i] == NULL)
		{
			free(fk);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			fk[i][j] = 0;
		}
	}

	return (fk);
}
