#include "main.h"

/**
 * _isupper - this function check if char is upper or lower
 *
 * @c : input
 *
 * Return: 1 if uppercase else return 0 (success)
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
