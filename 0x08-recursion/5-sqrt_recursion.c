#include "main.h"

/**
 * _sqrt - a function that returns the natural square root of a number.
 *
 * @n : input number
 *
 * @sq : input intial sqrt
 *
 * Return: sqrt of number n
*/

int _sqrt(int n, int sq)
{
	if (sq * sq == n)
		return (sq);
	else if (sq * sq < n)
	{
		return (_sqrt(n, sq + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - main function
 *
 * @n : number that i get sqrt of it
 *
 * Return: sqrt of number n
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
