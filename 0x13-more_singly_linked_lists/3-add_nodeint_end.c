#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a list
 * @head: a pointer to the head of a given list
 * @n: the given data to be stored in the new node
 *
 * Return: a pointer to the new created node in the list or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;

	return (new_node);
}
