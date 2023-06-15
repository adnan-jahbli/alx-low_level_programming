#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: a pointer to the first node
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num_of_nodes;
	const dlistint_t *temp;

	num_of_nodes = 0;
	if (h)
	{
		temp = h;
		while (temp->next != NULL)
		{
			num_of_nodes++;
			printf("%d\n", temp->n);
			temp = temp->next;
		}
		printf("%d\n", temp->n);
		num_of_nodes++;
	}
	return (num_of_nodes);
}
