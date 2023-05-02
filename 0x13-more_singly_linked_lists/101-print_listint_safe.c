#include "lists.h"
#include <stdio.h>

void free_list_of_pointers(list_of_pointers_t **head);

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
				free_list_of_pointers(&temp);
				return (node);
			}
		}

		printf("[%p] %d\n", (void *) head, head->n);
		head = head->next;
		node++;
	}

	free_list_of_pointers(&temp);
	return (node);
}

/**
 * free_list_of_pointers - a function that frees a linked list
 * @head: a pointer to the first node of the list
 *
 * Return: void.
 */
void free_list_of_pointers(list_of_pointers_t **head)
{
	list_of_pointers_t *temp, *current;

	if (head)
	{
		current = *head;
		while ((temp = current))
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
