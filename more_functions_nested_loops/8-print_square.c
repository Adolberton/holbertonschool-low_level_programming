#include "main.h"

/**
 * print_square - returns 1 if character is lowercase else 0
 * @size: edfsgsdf
 * Return: 1 if success, else 0.
 */
void print_square(int size)
{
	int l, h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else

		for (h = 0; h < size; h++)
		{
			for (l = 0; l < size; l++)
			{
				_putchar ('#');
			}
			_putchar('\n');
		}
}
