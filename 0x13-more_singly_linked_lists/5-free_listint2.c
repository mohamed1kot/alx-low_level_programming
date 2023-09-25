#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head : input linked list.
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
