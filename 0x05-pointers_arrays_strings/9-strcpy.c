#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src to dest
 *
 * @dest: input
 *
 * @src: input
 *
 * Return: Always dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
