#include "variadic_functions.h"

/**
 * print_strings - Calcule la somme de ses paramètres.
 * @n: Le nombre de paramètres.
 * @separator: Les paramètres à additionner.
 *
 * Return: La somme des paramètres.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(args, char *) == NULL)
			printf("(nil)");

		else
		{
			(printf("%s", va_arg(args, char *)));
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
