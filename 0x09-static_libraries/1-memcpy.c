#include "main.h"

/**
 * _memcpy - unction copies n bytes from memory area src to memory area dest.
 *
 * @dest : string buffer
 *
 * @src : string i will replace it
 *
 * @n : number of character will replace it
 *
 * Return: dest After called memcpy function
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
