#include "main.h"

/**
 * _islower - check if the char is lowercase
 *
 * description: check c _islower or not
 *
 * @c: the input the pri=ogram check if lowercase or not
 *
 * Return: 1 if c is lowercase otherwise 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
