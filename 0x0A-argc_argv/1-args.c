#include <stdio.h>

/**
 * main -  a program that prints the number of arguments passed into it.
 *
 * @argc : count of argument.
 * @argv : argument in this array.
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
