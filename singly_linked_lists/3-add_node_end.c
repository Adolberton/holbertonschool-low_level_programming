#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *last_node;
    int i;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);
    for (i = 0; str[i] != '\0'; i++)
        ;
    new_node->str = strdup(str);
    new_node->len = i;

    if (*head == NULL)
    {
        new_node->next = *head;
        *head = new_node;
    }
    else
    {
        last_node = *head;
        while (last_node->next != NULL)
            last_node = last_node->next;
        last_node->next = new_node;
        new_node->next = NULL;
    }
    return (new_node);
}
