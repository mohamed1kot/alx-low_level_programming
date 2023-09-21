#include "lists.h"

/**
 * add_node - a function that adds a new
 * node at the beginning of a list_t list.
 *
 * @head : is a firt node.
 * @str : input string will be added.
 *
 * Return: index of new string will be added or NULL.
*/

list_t *add_node(list_t **head, const char *str)
{
	char *copy;
	int len_s;
	list_t *new;

	new = malloc(sizeof(unsigned int));
	if (new == NULL)
		return (NULL);

	copy = strdup(str);
	if (copy == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len_s = 0; str[len_s];)
		len_s++;

	new->str = copy;
	new->len = len_s;
	new->next = *head;
	*head = new;
	return (new);
}
