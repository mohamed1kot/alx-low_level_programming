#include "lists.h"

/**
 * print_listint - print the elements in linked list h.
 *
 * @h : the input linked list.
 *
 * Return: the number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	size_t C_node = 0;

	while (h)
	{
		C_node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (C_node);
}
