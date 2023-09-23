#include "lists.h"

/**
 * print_list - this function is print all the elements of list_t.
 *
 * @h : the input list.
 *
 * Return: count of nodes.
*/

size_t print_list(const list_t *h)
{
	size_t Count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (Count);
}
