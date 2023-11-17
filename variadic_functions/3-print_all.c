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

	va_start(args, format);
	while (format[i])
	{
		current = format[i];
		switch (current)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if (format[i + 1] && (format[i + 1] == 'c' || format[i + 1] == 'i'
					|| format[i + 1] == 'f' || format[i + 1] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
