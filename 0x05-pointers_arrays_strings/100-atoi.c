#include "main.h"

/**
 * _atoi- Write a function that convert a string to an integer.
 *
 * @s : input
 *
 * Return: always (num * c)
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int c = 1;

	while (*s++)
	{
		if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (*s == '-')
			c *= -1;
		else if (num > 0)
			break;
	}
	return (num * c);
}
