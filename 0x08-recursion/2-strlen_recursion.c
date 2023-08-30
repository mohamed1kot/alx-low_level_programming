#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s : the input string
 *
 * Return: length of string
*/

int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s != '\0')
	{
		len += _strlen_recursion(s + 1) + 1;
	}
	return (len);
}
