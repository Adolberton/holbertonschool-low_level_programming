#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: returns the concatenated string to *dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int destLen = 0;

	while (dest[destLen] != '\0')
	{
	destLen++;
	}
	while (src[i] != '\0')
	{
	dest[destLen + i] = src[i];
	i++;
	}
dest[destLen + i] = '\0';
return (dest);
}
