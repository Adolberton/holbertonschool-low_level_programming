
void *malloc_checked(unsigned int b)
{
	*ptr = malloc(sizeof(b));
	if (ptr == NULL)
	{
		exit(98);
	}
	return(ptr);
}
