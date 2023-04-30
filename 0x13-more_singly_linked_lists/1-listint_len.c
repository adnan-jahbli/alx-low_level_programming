#include "lists.h"

/**
 * listint_len - a function that counts the number of
 * elements in a linked list
 * @h: a pointer to the start of the list
 *
 * Return: number of elemnts in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}
