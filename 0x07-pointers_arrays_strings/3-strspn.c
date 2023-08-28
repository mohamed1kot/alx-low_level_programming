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
	int i;
	int j;
	int sum;

	sum = 1;
	for (i = 0; accept[i] > '\0'; i++)
	{
		for (j = 0; s[j] > '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				sum += 1;
				break;
			}
		}
	}
	return (sum);
}
