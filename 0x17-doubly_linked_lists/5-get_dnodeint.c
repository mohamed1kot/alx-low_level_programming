#include "lists.h"

/***/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t indx = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (indx == index)
			return (head);
		head = head->next;
		indx++;
	}
	return (NULL);
}
