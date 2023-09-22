#include <stdio.h>

void __attribute__((constructor)) _print_str(void);

/**
 * _print_str - a function that prints
 * "You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
 * before the main function is executed.
 *
 * Return: don`t return anything.
*/

void _print_str(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
