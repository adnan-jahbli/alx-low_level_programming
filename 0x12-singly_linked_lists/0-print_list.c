#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints all the allements of a list_t list
 *@h: a pointer to the head node of the list
 *
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *p = h;
	size_t n;

	n = 0;
	while (p != NULL)
	{
		if (!(p->str))
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", p->len, p->str);
		}
		p = p->next;
		n++;
	}
	return (n);
}
