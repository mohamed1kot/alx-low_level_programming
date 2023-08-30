#include "main.h"

/**
 * _prime -  a function that returns 1
 * if the input integer is a prime number, otherwise return 0
 *
 * @s : divisor
 * @n : input number
 *
 * Return: 1 or 0
*/

int _prime(int n, int s)
{
	if (n <= 1)
		return (0);
	if (s == 1)
		return (1);
	if (n % s == 0)
		return (0);
	return (_prime(n, s - 1));
}
/**
 * is_prime_number -  a function that returns 1
 * if the input integer is a prime number, otherwise return 0.
 *
 * @n : input number
 *
 * Return: 0 or 1
*/

int is_prime_number(int n)
{
	return (_prime(n, n - 1));
}
