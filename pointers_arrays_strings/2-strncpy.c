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

	while (src[i] != '\0' &&  n)
	{
	dest[i] = src[i];
	i++;
	if (i == n)
		break;
	}
dest[i] = '\0';
return (dest);
}
