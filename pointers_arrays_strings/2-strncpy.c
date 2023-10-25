#include "main.h"

/**
 * _strncpy - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: mabite
 * Return: returns the concatenated string to *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (dest);
}
