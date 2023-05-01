#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list
 * @head: a pointer to the head of the given linked list
 *
 * Return: a pointer to the first node of the reverses list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1, *temp2;
	unsigned int i;

	if (head && *head)
	{
		temp2 = (*head)->next;
		i = 0;
		while (temp2)
		{
			temp1 = *head;
			*head = temp2;
			temp2 = (*head)->next;
			(*head)->next = temp1;
			if (i == 0)
				temp1->next = NULL;
			i++;
		}
	}

	return (*head);
}
