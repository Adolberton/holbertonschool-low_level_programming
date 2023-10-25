#include "main.h"

/**
 * reverse_array - concatenates two strings
 * @n: the destination string
 * @a: the source string
 * Return: returns the concatenated string to *dest
 */

void reverse_array(int *a, int n)
{
	n = sizeof(a) / 8;

	while (a[n] != *a)
	{
	_putchar (a[n] + '\0');
	n--;
	}
}
