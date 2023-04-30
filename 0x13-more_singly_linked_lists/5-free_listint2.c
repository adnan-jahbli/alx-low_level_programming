#include "lists.h"

/**
 * free_listint2 - a function that frees a list and set head to NULL
 * @head: a pointer to the first node in the list
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (head)
	{
		while (temp)
		{
			*head = (*head)->next;
			free(temp);
			temp = *head;
		}
	}
}
