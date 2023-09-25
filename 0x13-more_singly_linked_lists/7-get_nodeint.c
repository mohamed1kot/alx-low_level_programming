#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the
 * nth node of a listint_t linked list.
 *
 * @head : input linked list.
 * @index : index if node dwill return it.
 *
 * Return: null or node of index.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count <= index && head->next != NULL)
	{
		if (index == count)
			return (head);
		head = head->next;
		count++;
	}

	return (NULL);
}
