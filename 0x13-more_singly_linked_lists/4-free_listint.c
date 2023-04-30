#include "lists.h"

/**
 * free_listint - a function that frees a list
 * @head: a pointer to the first node in the list
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (temp)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
