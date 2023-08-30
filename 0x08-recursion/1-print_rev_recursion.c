#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 *
 * @s : input of string will print it
 *
 * Return: None
*/

void _print_rev_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(s[i]);
	}
}
