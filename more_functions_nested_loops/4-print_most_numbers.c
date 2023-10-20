#include "main.h"

/**
* print_most_numbers - returns 1 if character is lowercase else 0
* Return: 1 if success, else 0.
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	if (i != 2 && i != 4)
	_putchar('0' + i);
	}
	_putchar('\n');
}
