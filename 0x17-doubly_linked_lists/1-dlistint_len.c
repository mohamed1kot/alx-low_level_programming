#include "lists.h"

/**
 * dlistint_len - function count the lenght of linked list.
 *
 * @h : the head of linked list.
 *
 * Return: the len of linked list.
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
