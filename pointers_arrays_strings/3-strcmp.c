#include "main.h"

/**
 * _strcmp - concatenates two strings
 * @s1: the destination string
 * @s2: the source string
 * Return: returns the concatenated string to *dest
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s2 == *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
