#include "main.h"

/**
 * rot13 -  a function that encodes a string using rot13.
 *
 * @str : input string
 *
 * Return: ptr.
*/

char *rot13(char *str)
{
	int j;

	char str1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str2[] = "nopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklm";
	char *ptr = str;

	while (*str)
	{
		for (j = 0; j < 52; j++)
		{
			if (*str == str1[j])
			{
				*str = str2[j];
				break;
			}
		}
		str++;
	}
	return (ptr);
}
