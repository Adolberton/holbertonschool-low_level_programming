#include "main.h"
/**
 * is_prime_recursive - Check if a number is prime using recursion.
 * @n: The number to be checked.
 * @divisor: The current divisor being tested.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0); // 0 and 1 are not prime numbers.
	}
	if (divisor == 1)
	{
		return (1); // 2 is a prime number, and n is not divisible by 1.
	}
	if (n % divisor == 0)
	{
		return (0); // n is divisible by divisor, not a prime number.
	}
	return (is_prime_recursive(n, divisor - 1));
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
