/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return NULL;

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return NULL;

	for (unsigned int i = 0; i < size; i++)
		arr[i] = c;

	return arr;
}

