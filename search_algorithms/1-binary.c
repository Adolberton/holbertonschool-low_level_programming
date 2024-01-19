#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted integer array.
 * @array: Pointer to the sorted array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the first occurrence of 'value' in 'array',
 *         or -1 if 'value' is not found or 'array' is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;
	int i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			right = mid - 1;

		else
			left = mid + 1;
	}

	return (-1);
}
