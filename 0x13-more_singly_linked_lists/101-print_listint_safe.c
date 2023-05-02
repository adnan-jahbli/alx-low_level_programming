#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - a function that prints a linked list
 * @head: a pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	list_of_pointers_t *temp, *temp1, *temp2;
	size_t node;

	node = 0;
	temp = NULL;
	while (head)
	{
		temp1 = malloc(sizeof(list_of_pointers_t));

		if (temp1 == NULL)
			exit(98);

		temp1->ptr = (void *) head;
		temp1->next = temp;
		temp = temp1;

		temp2 = temp;

		while (temp2->next)
		{
			temp2 = temp2->next;
			if (head == temp2->ptr)
			{
				printf("-> [%p] %d\n", (void *) head, head->n);
				return (node);
			}
		}

		printf("[%p] %d\n", (void *) head, head->n);
		head = head->next;
		node++;
	}

	return (node);
}
