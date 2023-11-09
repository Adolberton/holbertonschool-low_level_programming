#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: mabit
 * Return: returns the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	char *strced;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	strced = malloc(sizeof(char) * (len1 + n + 1));
	if (strced == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		strced[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		strced[len1 + i] = s2[i];
	}
	strced[len1 + n] = '\0';
	return (strced);
}
