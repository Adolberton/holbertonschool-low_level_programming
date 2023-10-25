#include "main.h"

/**
 * reverse_array - concatenates two strings
 * @n: the destination string
 * @a: the source string
 * Return: returns the concatenated string to *dest
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
