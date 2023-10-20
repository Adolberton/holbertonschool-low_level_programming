#include "main.h"

/**
* print_numbers - returns 1 if character is lowercase else 0
* Return: 1 if success, else 0.
*/

void more_numbers(void)
{
	int i, t;

	for (t = 0; t < 10; t++)
	{	_putchar('\n');
		for (i = 0; i < 15; i++)
	{
	_putchar('0' + i);
	}
	}
	_putchar('\n');
}
