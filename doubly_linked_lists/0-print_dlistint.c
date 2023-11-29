#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	while (h != NULL)
	{
	printf("%d", h->n);
	h = h->next;
	i++;
	}
	return (i);
}
