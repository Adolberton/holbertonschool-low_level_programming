#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char current;
	int boo = 0;

	va_start(args, format);
	while (format[i])
	{
		current = format[i];
		switch (current)
		{
			case 'c':
				printf("%c", va_arg(args, int)), boo = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), boo = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), boo = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", (str == NULL) ? "(nil)" : str), boo = 1;
				break;
		}
		if (boo && format[i + 1] && (format[i + 1] == 'c' || format[i + 1] == 'i'
					|| format[i + 1] == 'f' || format[i + 1] == 's'))
		{
			printf(", ");
			boo = 0;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
