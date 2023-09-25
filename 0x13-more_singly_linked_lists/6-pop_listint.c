#include "lists.h"

/**
 * pop_listint -  a function that deletes
 * the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 *
 * @head : input linked list.
 *
 * Return: 0 if head == NULL else return head of list.
*/

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int head_pop;

	if (*head == NULL)
		return (0);

	ptr = *head;
	head_pop = (*head)->n;
	*head = (*head)->next;

	free(ptr);

	return (head_pop);
}
