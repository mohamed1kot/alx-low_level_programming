#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 *
 * @head : input linked list.
 *
 * Return: a pointer to the first node of the reversed list (*head).
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new;
	listint_t *new1;

	if (head == NULL || *head == NULL)
		return (NULL);

	new1 = NULL;

	while ((*head)->next != NULL)
	{
		new = (*head)->next;
		(*head)->next = new1;
		new1 = *head;
		*head = new;
	}

	(*head)->next = new1;

	return (*head);
}
