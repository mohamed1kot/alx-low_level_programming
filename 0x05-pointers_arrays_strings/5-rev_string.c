#include "main.h"

/**
 * rev_string - Write a function that prints a recerse string
 *
 * @s: input string
 *
 * Return: None
*/

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
