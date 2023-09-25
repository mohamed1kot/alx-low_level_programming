#include "lists.h"

/**
 * add_nodeint - a function is add a new node
 * at the begining of a listint_t list.
 *
 * @head : input the head of linked list.
 * @n : a new elements will added it.
 *
 * Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);
}
