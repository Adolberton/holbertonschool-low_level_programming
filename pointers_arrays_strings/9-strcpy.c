#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - Prints a string in reverse
 * @dest: The string to print
 * @src: sqdjfq
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
