#include "main.h"

/**
 * _strncpy - a function that copies a string.
 *
 * @dest : input string
 *
 * @src : input string
 *
 * @n : input intger count of character i will added
 *
 * Return: Always (dest)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int c2;

	for (c2 = 0; c2 < n && src[c2] != '\0'; c2++)
	{
		dest[c2] = src[c2];
	}
	while (c2 < n)
	{
		dest[c2] = '\0';
		c2++;
	}

	return (dest);
}
