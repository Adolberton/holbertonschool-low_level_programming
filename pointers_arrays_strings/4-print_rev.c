#include "main.h"

/**
 *print_rev - sdf
 * @s: sqdqfsqf
 */

void print_rev(char *s)
{
	int a = 0;
	int total = 0;

	while (s[a] != '\0')
	{
		total++;
	}
	while (total >= s[0])
	{
		_putchar(s[total]);
		total--;
	}
	_putchar('\n');
}

