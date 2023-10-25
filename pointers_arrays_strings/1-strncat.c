#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: mabite
 * Return: returns the concatenated string to *dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int destLen = 0;

	while (dest[destLen] != '\0')
	{
	destLen++;
	}
	while (src[i] != '\0' && i <= n)
	{
	dest[destLen + i] = src[i];
	i++;
	}
dest[destLen + i] = '\0';
return (dest);
}
