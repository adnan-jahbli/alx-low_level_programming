#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at the given index of a
 * dlistint_t linked list.
 *
 * @head: Pointer to the head of the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *previous;
	unsigned int i;

	current = *head;

	if (current != NULL)
		while (current->prev != NULL)
			current = current->prev;

	i = 0;

	while (current != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = current->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				previous->next = current->next;

				if (current->next != NULL)
					current->next->prev = previous;
			}

			free(current);
			return (1);
		}
		previous = current;
		current = current->next;
		i++;
	}

	return (-1);
}

