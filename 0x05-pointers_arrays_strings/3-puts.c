#include "main.h"

/**
 * _puts - Write a function that prints a string, followed by a new line
 *
 * @str: input string
 *
 * Return: None
*/

void _puts(char *str)
{
		while (*str != '\0')
		{
			_putchar(*str + 0);
			str++;
		}
		_putchar('\n');
}
