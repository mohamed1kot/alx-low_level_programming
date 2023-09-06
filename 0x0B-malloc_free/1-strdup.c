#include "main.h"

/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 *
 * @str : input string.
 *
 * Return: NULL if no character in string else Return str1.
*/

char *_strdup(char *str)
{
	char *str1 = malloc(sizeof(*str));
	unsigned int size;
	unsigned int i;

	for (size = 0; str[size] != '\0'; size++)
		;
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str1[i] = str[i];
	}
	return (str1);
}
