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

	// Trouver la fin de la chaîne
	while (*end)
	{
		++end;
	}
	--end; // Reculer d'un caractère pour pointer le dernier caractère

	// Inverser la chaîne
	while (s < end)
	{
		temp = *s;
		*s = *end;
		*end = temp;
		++s;
		--end;
	}
}
