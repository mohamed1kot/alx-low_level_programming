#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 *
 * @head : input linked list.
 *
 * Return: don`t return anything.
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
