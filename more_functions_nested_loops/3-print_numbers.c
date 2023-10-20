#include "main.h"

/**
* print_numbers - returns 1 if character is lowercase else 0
* Return: 1 if success, else 0.
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	_putchar('0' + i);
	}
	_putchar('\n');
}
