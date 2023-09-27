#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 *
 * @head : input linked list.
 *
 * Return: the number of nodes in the list.
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;

	if (current == NULL)
		return (98);

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current->next >= current)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}
		current = current->next;
	}
	return (count);
}
