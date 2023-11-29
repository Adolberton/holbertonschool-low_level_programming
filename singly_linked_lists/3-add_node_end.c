#include "lists.h"
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	new_node->str = strdup(str);
	new_node->len = i;
	
	head->next = *new_node;
	return(new_node)
}
