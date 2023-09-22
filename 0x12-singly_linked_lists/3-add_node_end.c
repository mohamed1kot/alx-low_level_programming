#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 *
 * @head : node is begain of the linked list.
 * @str : the input string will added in the end of linked list.
 *
 * Return: the address of the new element, or NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *node = *head;
	int len;


	if (!new || !head)
		return (NULL);
	if (str)
	{
		for (len = 0; str[len]; len++)
			;
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		new->len = len;
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
