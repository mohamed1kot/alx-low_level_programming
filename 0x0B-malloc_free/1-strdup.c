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
	char *str1;
	unsigned int size = 0;
	unsigned int i = 0;

	for (; str[size] != '\0'; size++)
		;
	if (str == NULL)
		return (NULL);
	str1 = malloc(size * sizeof(*str) + 1);
	if (str1 == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
		{
			str1[i] = str[i];
		}
	}
	return (str1);
}
