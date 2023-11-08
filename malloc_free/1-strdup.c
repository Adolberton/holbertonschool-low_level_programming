#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Entry point
 * @str : mabit
 * Return: a pointer to the array, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *cp;
	unsigned int i = 0, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	cp = malloc(sizeof(str));

	if (cp == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		cp[j] = str[j];
	}
	return (cp);
}
