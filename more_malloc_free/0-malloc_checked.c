#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
  * malloc_checked - Allocates memory
  * @b: the size to allocate
  *
  * Return: Nothing.
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(unsigned int) * b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
