#include "main.h"

/**
 * cap_string - concatenates two strings
 * @str: the destination string
 * Return: returns the concatenated string to *dest
 */
char *cap_string(char *str)

{
	int i = 0;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}', '\0'};

	while (str[i])
	{
		int j = 0;

		if (i == 0)
		{
			str[i] -= 32;
		}

		while (sep[j])
		{
			if (str[i] == sep[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
			j++;
		}
		i++;
	}

	return (str);
}

