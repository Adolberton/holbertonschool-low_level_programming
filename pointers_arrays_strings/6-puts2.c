#include "main.h"

/**
 * puts2 - Prints a string in reverse
 * @str: The string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int a;
	int b = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
	}
	while (b < a)
	{
		_putchar(str[b]);
		b += 2;
	}
	_putchar('\n');
}
