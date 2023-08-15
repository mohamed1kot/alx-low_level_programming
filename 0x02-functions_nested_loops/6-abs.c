#include "main.h"

/**
 * _abs - this function is return absulote value
 *
 * @n: input number
 *
 * Description : this progrom take a number and output absulote value of unmber
 *
 * Return: (n)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
