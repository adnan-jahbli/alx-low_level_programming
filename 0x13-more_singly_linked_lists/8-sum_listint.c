#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * in a linked list.
 * @head: the head of a linked list
 *
 * Return: returns the sum of all data or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
