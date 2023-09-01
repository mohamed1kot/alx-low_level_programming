#include "main.h"

/**
 * _strchr -function returns a pointer to the first character c in the string s
 *
 * @s : string will search in it
 *
 * @c : charcter will search aboout it
 *
 * Return: null if it not existance
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
