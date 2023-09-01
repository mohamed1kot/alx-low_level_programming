#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings.
 *
 * @dest : input string
 *
 * @src : input string
 *
 * @n : input intger count of character i will added
 *
 * Return: Always (dest)
*/

char *_strncat(char *dest, char *src, int n)
{
	int c1;
	int c2;

	c1 = 0;
	while (dest[c1] != '\0')
		c1++;
	for (c2 = 0; src[c2] != '\0' && c2 < n; c2++)
	{
		dest[c1 + c2] = src[c2];
	}
	dest[c1 + c2] = '\0';
	return (dest);
}
