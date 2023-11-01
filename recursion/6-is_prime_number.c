#include "main.h"
/**
 * is_prime_recursive - Check if a number is prime using recursion.
 * @n: The number to be checked.
 * @d: The current divisor being tested.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_recursive(int n, int d)
{
	if (n <= 1)
	{
		return (0);
	}
	if (d == 1)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, d - 1));
}

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}
