#include "lists.h"
#include <stdio.h>

void free_list_of_pointers2(list_of_pointers_t **head);

/**
 * free_listint_safe - a function that prints a linked list
 * @h: a pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	list_of_pointers_t *temp, *temp1, *temp2;
	listint_t *current;
	size_t node;

	node = 0;
	temp = NULL;
	while (*h)
	{
		temp1 = malloc(sizeof(list_of_pointers_t));

		if (temp1 == NULL)
			exit(98);

		temp1->ptr = (void *) *h;
		temp1->next = temp;
		temp = temp1;

		temp2 = temp;

		while (temp2->next)
		{
			temp2 = temp2->next;
			if (*h == temp2->ptr)
			{
				*h = NULL;
				free_list_of_pointers2(&temp);
				return (node);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		node++;
	}

	*h = NULL;
	free_list_of_pointers2(&temp);
	return (node);
}

/**
 * free_list_of_pointers2 - a function that frees a linked list
 * @head: a pointer to the first node of the list
 *
 * Return: void.
 */
void free_list_of_pointers2(list_of_pointers_t **head)
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
