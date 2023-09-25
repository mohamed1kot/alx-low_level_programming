#include "lists.h"

/**
 * free_listint -  a function that frees a listint_t list.
 *
 * @head : the linked list would to free it.
 *
 * Return: NULL.
*/

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(ptr);
		head = ptr;
	}
}
