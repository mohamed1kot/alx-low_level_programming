#include "lists.h"

/**
 * find_listint_loop -  a function that finds the loop in a linked list.
 *
 * @head : inpput linked list.
 *
 * Return: The address of the node
 * where the loop starts, or NULL if there is no loop.
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *new;
	listint_t *ptr;

	if (head->next == NULL || head == NULL)
		return (NULL);

	new = head->next;
	ptr = (head->next)->next
	while (ptr)
	{
		if (new == ptr)
		{
			new = head;

			while (new != ptr)
			{
				new = new->next;
				ptr = ptr->next;
			}

			return (new);
		}
		new = new->next;
		ptr = (ptr->next)->next;
	}
	return (NULL);
}
