#include "lists.h"

/**
 * add_dnodeint_end - function that adds
 * a new node at the end of a dlistint_t list.
 *
 * @head : input linked list.
 * @n : number of new node will add it.
 *
 * Return: the address of the new element, or NULL if it failed.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last_node;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new;
	new->prev = last_node;
	return (new);
}
