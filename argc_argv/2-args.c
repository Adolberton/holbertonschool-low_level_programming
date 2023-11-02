#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the program's arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i] != argv[argc - 1])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
