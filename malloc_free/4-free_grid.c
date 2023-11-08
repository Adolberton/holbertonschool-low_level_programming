#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Concatenates two strings
 * @grid: mabite
 * @height: sqdfsq
 * Return: returns the concatenated string
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
