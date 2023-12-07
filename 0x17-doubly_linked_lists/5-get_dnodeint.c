#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t linked list.
 *
 * @head : input linked list.
 * @index : input index of linked list.
 *
 * Return: address of node has index or NULL if fail.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t indx = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (indx == index)
			return (head);
		head = head->next;
		indx++;
	}
	return (NULL);
}
