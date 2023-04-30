#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 * @head: a pointer to the head of a list
 * @n: a given data to save in the new node
 *
 * Return: a pointer to the first node in the list or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = (int) n;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
