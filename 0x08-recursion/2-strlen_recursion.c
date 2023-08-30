#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s : the input string
 *
 * Return: length of string
a function that returns 1 if a string is a palindrome and 0 if not*/

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
