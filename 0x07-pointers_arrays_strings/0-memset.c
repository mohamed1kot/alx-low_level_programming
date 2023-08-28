#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area.
 *
 * @s : input string
 *
 * @b : character of string i will replace it
 *
 * @n : number of character iw will replace it from string
 *
 * Return: string after replace
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
