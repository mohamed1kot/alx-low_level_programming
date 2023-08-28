#include "main.h"

/**
 * _strspn - function calculates the length of the initial segment of s
 *
 * @s :string input will search in it
 *
 * @accept : string input i will search about it
 *
 * Return: sum
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
