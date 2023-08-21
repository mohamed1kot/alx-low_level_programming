#include "main.h"

/**
 * print_rev - Write a function that prints a recerse string
 *
 * @s: input string
 *
 * Return: None
*/

void print_rev(char *s)
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
