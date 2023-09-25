#include "lists.h"

/**
 * listint_len - a function count the number of nodes in this linked list.
 *
 * @h : input linked list.
 *
 * Return: number of nodes.
*/

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
