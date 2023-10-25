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
	while (*src != '\0' && *src < n)
	{
		*src =  *dest;
		src++;
		dest++;
	}
	*dest = '\0'
	return (dest);
}
