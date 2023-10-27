#include "main.h"

/**
 * cap_string - concatenates two strings
 * @str: the destination string
 * Return: returns the concatenated string to *dest
 */
char *cap_string(char *str)

{
	int j = 0;
	int i = 0;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
			'"', '(', ')', '{', '}'};

	while (str[i])
	{
		while (sep[j])
		{
			if (i == 0)
			{
				str[i] -= 32;
			}
			if (str[i] == sep[j])
			{
				str[i + 1] -= 32;
			}
			j++;
		}
		i++;
	}
	return (str);
}

