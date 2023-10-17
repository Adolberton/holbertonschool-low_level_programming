#include "main.h"

/**
*_islower-check if a character is lower case
*@c: the character
*Return: 1 if the lower case is found
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
