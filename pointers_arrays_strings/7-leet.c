#include "main.h"

/**
 * leet - concatenates two strings
 * @str: the destination string
 * Return: returns the concatenated string to *dest
 */
char *leet(char *str)
{
	char *ltr = "aeotlAEOTL";
	char *nb = "4307143071";
	int i = 0;

	while (str[i])
	{
		int j = 0;

		while (ltr[j])
		{
			if (str[i] == ltr[j])
			{
				str[i] = nb[i];
			}
		}
	}
	return (str);
}
