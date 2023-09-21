#include "lists.h"

/**
 * list_len - this function is count the numbers of nodes.
 *
 * @h : input of nodes.
 *
 * Return: return count of nodes.
*/

size_t list_len(const list_t *h)
{
	size_t c_node = 0;

	while (h)
	{
		if (h->str == NULL)
			return (c_node);
		c_node++;
		h = h->next;
	}
	return (c_node);
}
