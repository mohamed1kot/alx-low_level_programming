#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list.
 *
 * @head : input linked list.
 * @index : index of elements want to delete it.
 *
 * Return: 1 if it succeeded, -1 if it failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *new = *head;
	unsigned int C_node;

	if (new == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}

	for (C_node = 0; C_node < (index - 1); C_node++)
	{
		if (new->next == NULL)
			return (-1);

		new = new->next;
	}

	ptr = new->next;
	new->next = ptr->next;
	free(ptr);
	return (1);
}
