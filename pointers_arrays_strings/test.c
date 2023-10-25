#include <stdio.h>

int main(void)
{
	int i, j;

	char dest[] = "Adonis";
	char src[] = "Riahi";

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	printf("%s", dest);
}
