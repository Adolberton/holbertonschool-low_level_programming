#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: Tema le Génie
 *
 */
int main(void)
	int a, b;
{
	for (a = 0 ; a <= 9 ; a++)
{
	for (b = a + 1 ; b <= 9 ; b++)
{
	end = (a * 10 + b);
	putchar('0' + a);
	putchar('0' + b);
	if (end < 89)
{
	putchar(',');
	putchar(' ');
}
}
}
	return (0);
}
