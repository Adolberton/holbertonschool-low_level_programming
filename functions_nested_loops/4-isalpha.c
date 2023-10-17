#include "main.h"

/**
*_isalpha-check if a character is lower case
*@c: the character
*Return: 1 if the lower case is found
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
