#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list_t list to find the number of elements of
 * Return: the number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{

	int zub = 0;

	while (h != NULL)
	{
		h = h->next;
		zub++;
	}
	return (zub);
}
