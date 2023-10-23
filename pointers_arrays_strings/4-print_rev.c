#include "main.h"

/**
 *print_rev - sdf
 * @s: sqdqfsqf
 */

void print_rev(char *s)
{
	int total = 0;

	while (s[total] != '\0')
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

