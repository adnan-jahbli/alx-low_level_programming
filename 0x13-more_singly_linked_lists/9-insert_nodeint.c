#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 * @head: a pointer to the head of a linked list
 * @idx: the index of the list where the new node should be added
 * @n: the data value of the new node
 *
 * Return: the adress of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i, n_of_nodes;

	/* counting the number of nodes in the list*/
	temp = *head;
	n_of_nodes = 0;
	while (temp)
	{
		n_of_nodes++;
		temp = temp->next;
	}
	if (!head || idx > n_of_nodes)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	temp = *head;
	if (idx)
	{
		for (i = 0; i < idx - 1; i++)
			temp = temp->next;
		new->next = temp->next;
		temp->next = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
