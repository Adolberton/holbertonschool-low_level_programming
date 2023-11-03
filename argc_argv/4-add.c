#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
		int i, result = 0;

		if (argc == 1)
		{
				printf("0\n");
				return (0);
		}
		for (i = 1; i < argc; i++)
		{
				if (*argv[i] < '0' || *argv[i] > '9')
					{
						printf("Error\n");
						return (1);
					}
				result += atoi(argv[i]);
		}
		printf("%d\n", result);
		return (0);
		
}