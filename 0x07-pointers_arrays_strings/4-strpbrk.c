#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string
 *
 * @s : main strig we will search in it
 *
 * @accept : sacound string it will search about it
 *
 * Return: ptr
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *ptr;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}
	return (0);
}
