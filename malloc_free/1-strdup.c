#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *strced;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	strced = malloc(sizeof(char) * (len1 + len2 + 1));
	if (strced == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < len1 ; i++)
	{
		strced[i] = s1[i];
	}
	for (i = 0 ; i < len2 ; i++)
	{
	strced[len1 + i] = s2[i];
	}
	return (strced);
}
