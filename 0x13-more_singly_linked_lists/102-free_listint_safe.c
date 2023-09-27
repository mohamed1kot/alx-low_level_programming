#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 *
 * @h : input pointer pointer to poinyter to input linked list.
 *
 * Return: the size of the list that was free’d.
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *temp;
	size_t count = 0;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
		count++;

		if (temp->next >= temp)
			break;
	}
	*h = NULL;
	return (count);
}
