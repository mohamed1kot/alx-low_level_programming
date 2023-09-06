#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1 : input string 1
 * @s2 : input string 2
 *
 * Return: str or NULL
*/

char *str_concat(char *s1, char *s2)
{
	char *str;
	int sizet;
	int size1;
	int size2;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s1 = '\0';
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	str = malloc((size1 + size2) * sizeof(char) + 1);
	if (str == 0)
		return (0);

	for (sizet = 0; sizet < size1 + size2; sizet++)
	{
		if (sizet < size1)
			str[sizet] = s1[sizet];
		else
		{
			str[sizet] = s2[sizet - size1];
		}
	}
	str[sizet] = '\0';
	return (str);
}
