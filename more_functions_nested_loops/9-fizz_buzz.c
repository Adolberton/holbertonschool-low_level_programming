#include <stdio.h>
/**
 * main - returns 1 if character is lowercase else 0
 *
 * Return: 1 if success, else 0.
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		} else if (i % 3 == 0)
		{
			printf("Fizz ");
		} else if (i % 5 == 0)
		{
			printf("Buzz ");
		} else
		{
			printf("%d ", i);
		}
	}

	printf("\n");
	return (0);
}
