#include "main.h"

/**
 * rev_string - Prints a string in reverse
 * @s: The string to print
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *end = s;
	char temp;

	while (*end)
	{
		++end;
	}
	--end;
	while (s < end)
	{
		temp = *s;
		*s = *end;
		*end = temp;
		++s;
		--end;
	}
}
