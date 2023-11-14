#include "3-calc.h"
/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the addition.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the subtraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The result of the division.
 */
int op_div(int a, int b)
{
	return (a / b);
	{
		printf("Error/n");
		exit(100);
	}
}

/**
 * op_mod - Computes the remainder of the division of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of the division.
 *
 * Note: If either @a or @b is zero, the function prints an error message
 *       and exits with status code 100.
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error/n");
		exit(100);
	}
	return (a % b);
}
