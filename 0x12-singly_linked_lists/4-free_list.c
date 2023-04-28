#include "lists.h"

/**
 * free_list - a function that frees a linked list
 * @head: the head of the list
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *last_node;

	while ((last_node = head))
	{
		head = head->next;
		free(last_node->str);
		free(last_node);
	}
}
