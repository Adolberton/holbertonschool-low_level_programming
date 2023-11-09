#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *ptr;
	int size = (1 + max - min);

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
