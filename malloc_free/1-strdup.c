#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Copy a string to a newly allocated space in memory
 * @str: the string to be copied
 * Return: returns the copy of the string
 */

char *_strdup(char *str)
{
	int i;
	char *stred;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	stred = malloc(sizeof(char) * (len + 1));
	if (stred == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < len ; i++)
	{
		stred[i] = str[i];
	}
	stred[i] = '\0';
	return (stred);
}
