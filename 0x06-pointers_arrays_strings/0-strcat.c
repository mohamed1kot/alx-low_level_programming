#include "main.h"

/**
 * _strcat - Write a function that concatenates two strings.
 *
 * @dest : input string.
 *
 * @src : input string.
 *
 * Return: Always (dest).
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int n;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[i++] = src[n];
	}
	return (dest);
}
