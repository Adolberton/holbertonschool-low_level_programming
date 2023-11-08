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
	if (grid != NULL)
	{
		free(grid);
	}
}
