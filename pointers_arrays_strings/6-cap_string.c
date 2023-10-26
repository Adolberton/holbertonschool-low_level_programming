#include "main.h"

/**
 * cap_string - concatenates two strings
 * @str: the destination string
 * Return: returns the concatenated string to *dest
 */
char *cap_string(char *str)

{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		str[i] -= 32;
		i++;
	}
	return (str);
}

