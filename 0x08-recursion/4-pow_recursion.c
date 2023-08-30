#include "main.h"

/**
 * _pow_recursion -function that returns the value x raised to the power of y
 *
 * @x : the base input
 *
 * @y : the power innput
 *
 * Return: power
*/

int _pow_recursion(int x, int y)
{
	int pow;

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		pow = x * _pow_recursion(x, y - 1);
	}
	return (pow);
}
