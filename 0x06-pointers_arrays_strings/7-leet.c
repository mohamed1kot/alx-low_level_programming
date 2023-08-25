#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337.
 *
 * @str : input string
 *
 * Return: cp.
*/
char *leet(char *str)
{
	char *cp = str;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*str)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*str == key[i] || *str == key[i] + 32)
			{
				*str = value[i] + 48;
			}
		}
		str++;
	}
	return (cp);
}
