#include "lists.h"
#include <string.h>

/**
 * add_node - a function that adds a new node at the beginning of a list
 * @head: a pointer to the head of the list
 * @str: the given string
 *
 * Return: a pointer to the list or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length;

	length = 0;
	while (str[length])
		length++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = length;
	new->next = *head;

	*head = new;

	return (*head);
}
