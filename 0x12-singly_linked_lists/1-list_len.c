#include "lists.h"

/**
 * list_len - a function that counts the number of elements in a linked list
 * @h: the head node in a list
 *
 * Return: number if elements in a given linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *p = h;
	size_t n;

	n = 0;
	while (p)
	{
		p = p->next;
		n++;
	}

	return (n);
}
