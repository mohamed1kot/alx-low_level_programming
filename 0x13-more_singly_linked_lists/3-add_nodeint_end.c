#include "lists.h"

/**
 * add_nodeint_end -a function that adds new node at the end of  list.
 *
 * @head : head of input linked list.
 * @n : input the number will added at the end of the linked list.
 *
 * Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;


	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (last);
}
