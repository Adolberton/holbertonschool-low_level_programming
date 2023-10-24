#include "main.h"

/**
 * puts_half - Prints a string in reverse
 * @str: The string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
	}
	if (a % 2 != 0)
		a = (a - 1);
	a /= 2;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
