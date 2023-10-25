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
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
