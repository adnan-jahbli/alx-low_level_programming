#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: a pointer to the head of the linked list
 *
 * Return: the head node's data.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!*head)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;

	free(temp);

	return (n);
}
