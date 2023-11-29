#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t element;

	while (h->next)
	{
		h = h->next;
		element++;
	}
	return (element);
}
