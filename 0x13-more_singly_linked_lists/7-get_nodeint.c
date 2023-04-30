#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a linked list
 * @head: the head of the given linked list
 * @index: the given index of the data to be printed
 *
 * Return: the nth node of the given linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	if (!head)
		return (NULL);
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
