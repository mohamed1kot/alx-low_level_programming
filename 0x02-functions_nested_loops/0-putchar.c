#include "main.h"

/**
 * main - Entry point
 *
 * description: A C program print _putchar use _putchar()
 *
 * Return: Alwayes 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int count;

	for (count = 0; count < 8; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
