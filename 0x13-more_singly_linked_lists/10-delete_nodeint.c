#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * of a linked list
 * @head: a pointer to the head of the given linked list
 * @index: the given index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *done;
	unsigned int i, n_of_nodes;

	temp = *head;
	while (temp)
	{
		n_of_nodes++;
		temp = temp->next;
	}
	if (!head || !*head || index >= n_of_nodes)
		return (-1);

	temp = *head;
	if (index)
	{
		for (i = 0; i < index - 1; i++)
			temp = temp->next;
		done = temp->next;
		temp->next = done->next;
		free(done);
	}
	else
	{
		done = *head;
		*head = done->next;
		free(done);
	}

	return (1);
}
