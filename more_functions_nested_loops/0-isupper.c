#include "main.h"

/**
* _isupper - returns 1 if character is lowercase else 0
* @c: The character to be checked.
* Return: 1 if success, else 0.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= "Z")
		return (1);
	else
		return (0);
}
