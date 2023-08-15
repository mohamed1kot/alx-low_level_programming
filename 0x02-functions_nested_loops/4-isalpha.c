#include "main.h"

/**
 * _isalpha - check if the char is lowercase or uppercase
 *
 * description: check c _islower,uppercase or not
 *
 * @c: the input the program check if lowercase or not
 *
 * Return: 1 if c is lowercase and uppercase otherwise 0
*/

int _isalpha(int c)
{
	if (c >= 79 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
