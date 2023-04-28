#include "lists.h"
#include <string.h>

/**
 * add_node_end - a function that adds a new nod at the end of a list_t list
 * @head: a pointer to the head of the list
 * @str: the given string
 *
 * Return: a pointer to the list of NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	unsigned int length;

	length = 0;
	while (str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}

	return (*head);
}
