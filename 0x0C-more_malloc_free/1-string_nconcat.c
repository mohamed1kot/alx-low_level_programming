#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1 : input string s1.
 * @s2 : input string s2;
 * @n : number of character will print from s2.
 *
 * Return: string concat (ptr)
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		ptr[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		ptr[len++] = s2[index];

	ptr[len] = '\0';

	return (ptr);
}
