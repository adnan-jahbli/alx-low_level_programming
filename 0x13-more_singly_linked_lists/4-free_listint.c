#include "lists.h"

/**
 * free_listint - a function that frees a list
 * @head: a pointer to the first node in the list
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
