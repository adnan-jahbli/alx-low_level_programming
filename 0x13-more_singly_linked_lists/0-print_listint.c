#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a list
 * @h: a pointer to the list
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}
