#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1 : input string 1
 *
 * @s2 : inpur string 2
 *
 * Return: if equal return 0
*/

int _strcmp(char *s1, char *s2)
{
	int check = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			check = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (check);
}
