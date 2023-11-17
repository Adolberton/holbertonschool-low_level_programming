#include "main.h"

/**
 * sum_them_all - Calcule la somme de ses paramètres.
 * @n: Le nombre de paramètres.
 * @...: Les paramètres à additionner.
 *
 * Return: La somme des paramètres.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
